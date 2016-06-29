<?php include_once('connect.inc');?>
<?php

    if($_SERVER["REQUEST_METHOD"] == "POST")
        {$message;
      // username and password sent from form 
      
      $myusername = trim($_POST['uname']);
      $mypassword = md5(trim($_POST['password'])); 
      
      $res=mysql_query("SELECT id,password,uname,fname,lname,email,gender FROM `user` WHERE `uname`='$myusername'") ;
            $row2=mysql_fetch_object($res);
            
            
             if(!isset($row2->id)){
                $message.='<li> Username does not exist</li>';
              }
              else  {           
                  //$sql = "SELECT id,uname FROM `user` WHERE `uname` = '$myusername' and `password` = '$mypassword'";
                    //   $result = mysql_query($sql);
        
                     //$row = mysql_fetch_object($result);
                  if((strcmp ($mypassword, ($row2->password))!=0)){
                     $message.='<li>Enter the correct password</li>';
                    }
               
                 else{
                     
                     $_SESSION['userId']=$row2->id;
                     $_SESSION['uname']=$row2->uname;
                     $_SESSION['fname']=$row2->fname;
                     $_SESSION['lname']=$row2->lname;
                     $_SESSION['email']=$row2->email;
                     $_SESSION['password']=trim($_POST['password']);
                     $_SESSION['gender']=$row2->gender;
                            
                     
                     
                     header("location: index.php");
      
      
                     
                 
                    }
                }
      
      
   }
   if(isset($_GET["action"])){
    if($_GET["action"]=="logout"){
        session_destroy();
        header("location: index.php");
    }
   }
?>
    



