<!doctype html>
<html lang="it" class="h-100">
  <head>
    
    <title>examples</title>

    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3" crossorigin="anonymous">
    <!-- Custom styles for this template -->
    <link href="cover.css" rel="stylesheet">
  </head>
  <body class="d-flex h-100 text-center text-white bg-dark">
    
<div class="cover-container d-flex w-100 h-100 p-3 mx-auto flex-column">
  <header class="mb-auto">
    <div>
      <h3 class="float-md-start mb-0">Cover</h3>
      <nav class="nav nav-masthead justify-content-center float-md-end">
        <a class="nav-link <?php if(!isset($_GET['page']))echo('active');?>"  aria-current="page" href="#">Home</a>
        <a class="nav-link <?php if(isset($_GET['page'])){if($_GET['page']=='fetures')echo('active');}?>"  href="index.php?page=fetures">Features</a>
        <a class="nav-link <?php if(isset($_GET['page'])){if($_GET['page']=='contact')echo('active');}?>" href="index.php?page=contact">Contact</a>
      </nav>
    </div>
  </header>

  <main class="px-3">
    <h1>
      <?php 
        if(isset($_POST['email'])){
          echo($_POST['email']);
        }
        ?>
    </h1>
  <form action="index.php" method="post">
  <div class="row mb-3">
    <label for="inputEmail3" class="col-sm-2 col-form-label">Email</label>
    <div class="col-sm-10">
      <input type="email" name="email" class="form-control" id="inputEmail3">
    </div>
  </div>
  <button type="submit" class="btn btn-primary">test</button>
</form>
  </main>

  <footer class="mt-auto text-white-50">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-ka7Sk0Gln4gmtz2MlQnikT1wXgYsOg+OMhuP+IlRH9sENBO0LRn5q+8nbTov4+1p" crossorigin="anonymous"></script>
  </footer>
</div>
<?php
function somma($a, $b) {
    $somma = $a + $b;
    return $somma;
}
$somma = somma(3,5); // $somma sarà uguale ad 8
echo($somma);
?>

    
  </body>
</html>
