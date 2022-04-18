<?php

    define("UNCONNECTED", "UNCONNECTED");
    define("CONNECTED", "CONNECTED");
    define("ERROR", "ERROR");
    
    
    Class DBMS {
         
        var
        $host,
        $user,
        $pass,
        $name,
        $status,
        $link,
        $handle,
		$handles;
         
        function DBMS($host, $user, $pass, $name) {
             
            $this->host = $host;
            $this->user = $user;
            $this->pass = $pass;
            $this->name = $name;
             
            $this->status = UNCONNECTED;
        }
         
        function connect() {
             
            $this->link = mysqli_connect($this->host, $this->user, $this->pass, $this->name);
             
            if ($this->link) {
                $this->status = CONNECTED;
            } else {
                $this->status = ERROR;
            }
             
        }
         
        function isConnected() {
            return ($this->status == CONNECTED);
        }
         
        function isError() {
            return ($this->status == ERROR);
        }
         
        function query($query) {
             
            $this->handle =  mysqli_query($this->link, $query);
             
            if (!$this->handle) {
                $this->status = ERROR;
            } else {
                $this->status = CONNECTED;
            }
        }
		
		function multi_query($query) {
             
            $this->handles =  mysqli_multi_query($this->link, $query);
             
            if (!$this->handles) {
                $this->status = ERROR;
            } else {
                $this->status = CONNECTED;
            }
        }
        

        function sanitize() {
            /**/
            foreach($_POST as $key => $value) {
                $_POST[$key] = addslashes($value);
				$_POST[$key] = $this->caratteri($value);
            }
    
        }
        
		function registrazione(){
			$this->sanitize();
			foreach($_POST as $key => $value) {
				
				if ($key != "password") {
				 $_POST[$key] = strtolower($value);
				}
				
				else
                $_POST[$key]= md5($value);
				
				if ($key == "pass") {
				 $_POST[$key]= md5($value);
				}
            }
		}
        function getResult() {
             
            $result = false;
             
            do {
                $data = mysqli_fetch_assoc($this->handle);
                 
                if ($data) {
                    $result[] = $data;
                }
                 
            } while ($data);
             
            return $result;
             
        }
        
        function getNumRows() {
            return mysqli_num_rows($this->handle);
        }
		
		function getLastID(){
			return mysqli_insert_id($this->link);
		}
		//codifica i caratteri speciali del testo passato
		function caratteri($var, $qs = ENT_COMPAT, $charset = 'ISO-8859-1')
        {
            $search = array('ì', 'è', 'é', 'ò', 'à', 'ù','‘','’','“','”','"',"´","`","'");
            $replace = array('&igrave;', '&egrave;', '&eacute;', '&ograve;', '&agrave;', '&ugrave;','&#8216;','&#8217;','&#8220;','&#8221;','&#34;',"&#180;","&#96;","&#8217;");
            
            $var = str_replace($search, $replace, $var);
            $var = htmlentities($var, $qs, $charset, false);
            
            return $var;
        }
		
	
       
         
    }
$db = new DBMS("localhost","creazionenodi","","my_creazionenodi");
$db->connect();