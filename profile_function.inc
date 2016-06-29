<?php include_once('connect.inc');

if(isset($_POST["edit"])){
    
    extract($_POST);
    print_r("$password2");
 
    $encpassword2=  md5($password2);
  $sql=  mysql_query("UPDATE `user` SET `password`='$encpassword2',`fname`='$fname2',`lname`='$lname2',`email`='$email2',`gender`='$gender2'  WHERE `uname`='$uname2'");
                     $_SESSION['fname']=$fname2;
                     $_SESSION['lname']=$lname2;
                     $_SESSION['email']=$email2;
                     $_SESSION['password']=trim($password2);
                     $_SESSION['gender']=$row2->$gender2;
  
}
?>
