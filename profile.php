
<?php include_once('header.inc'); ?>
<?php include_once 'profile_function.inc';
?>

        <div id="section">
            
            <h1><?php echo $_SESSION['uname']; ?></h1>
            <form action="profile.php" method="post" enctype="multipart/form-data">
            Select image to upload:
            <input type="file" name="fileToUpload" id="fileToUpload">
            <input type="submit" value="Upload Image" name="submit">
                   <div class="group">
                <label class="js-form-required form-required">Username</label>
                <div class="input"><input autocomplete="off" type="text" name="uname2" id="uname" value="<?php echo $_SESSION['uname']?>" readonly></div>
            </div>
            <div class="group">
                <label class="js-form-required form-required">Password</label>
                <div class="input"><input type ="password" name="password2" id="password2" value="<?php echo $_SESSION['password']?>"></div>
            </div>
            <div class="group">
                <label class="js-form-required form-required">Confirm Password</label>
                <div class="input"><input type ="password" name="confirm_password2" id="confirm_password" value="<?php echo $_SESSION['password']?>"></div>
            </div>
            <div class="group">
                <label class="js-form-required form-required">FirstName</label>
                <div class="input"><input type ="text" name="fname2" id="fname" value="<?php echo $_SESSION['fname']; ?>"></div>
            </div>
            <div class="group">
                <label class="js-form-required form-required">LastName</label>
                <div class="input"><input type="text" name="lname2" id="lname" value="<?php echo $_SESSION['lname']; ?>"></div>
            </div>
            <div class="group">
                <label class="js-form-required form-required">E-mail</label>
                <div class="input"><input type="email" name="email2" id="email" value="<?php echo $_SESSION['email']; ?>"></div>
            </div>
            <div class="group">
                <label class="js-form-required form-required">Gender</label>
                <div class="input"><input type="radio" name="gender2" id="gender" value="Male"  <?php if((strcmp("Male", $_SESSION['gender'])==0)): ?> checked <?php endif;?>> Male</div>
                 <div class="input"><input type="radio" name="gender2" id="gender" value="Female" <?php if((strcmp("Female", $_SESSION['gender'])==0)): ?> checked <?php endif;?>>Female</div>
            </div>
            <div class="group">               
                <div class="input"><input type="submit" name="edit" id="edit" value="EDIT"></div>
            </div>
          
            <br>

</form>
            
        </div>
<?php include_once('footer.inc'); ?>
