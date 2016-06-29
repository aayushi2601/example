<?php include_once('connect.inc');
$path="";
if(strcmp($_SESSION['gender'],"Male")==0)
{
    $path="male.jpeg";
}
elseif(strcmp($_SESSION['gender'],"Female")==0)
{
    $path="female.jpeg";
}
else
{
    $path="other.png";
}

if(isset($_POST["edit"])){
    
    extract($_POST);
   
 
    $encpassword2=  md5($password2);
  $sql=  mysql_query("UPDATE `user` SET `password`='$encpassword2',`fname`='$fname2',`lname`='$lname2',`email`='$email2',`gender`='$gender2'  WHERE `uname`='$uname2'");
                     $_SESSION['fname']=$fname2;
                     $_SESSION['lname']=$lname2;
                     $_SESSION['email']=$email2;
                     $_SESSION['password']=trim($password2);
                     $_SESSION['gender']=$gender2;
  
}
?>
