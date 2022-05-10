//Index for following function
/*
	1. Course enquire form
	2. Contact form 
	3. Career form 
*/

//1.Course enquire form
function validCourseEnquiry()
{
	var c_enquirer_name = document.getElementById("c_enquirer_name").value; 
	var c_enquirer_email = document.getElementById("c_enquirer_email").value; 
	var c_enquirer_phone = document.getElementById("c_enquirer_phone").value;
	var course_title = document.getElementById("course_title").value;
	
	if(c_enquirer_name==" " || c_enquirer_name=="" || !(/^[a-zA-Z\s]+$/.test(c_enquirer_name)))
	{
		$("#c_enquirer_name_error").fadeIn(function()
		{
			setTimeout(function()
			{
				$("#c_enquirer_name").focus();
			},500);
		});
		return false;
	}
	else
	{
		$("#c_enquirer_name_error").fadeOut(function()
		{
			setTimeout(function()
			{
				$("#c_enquirer_name").focus();
			},500);
		});	
	}
	
	
	if (c_enquirer_email==null || c_enquirer_email=="")
	{
			$('#c_enquirer_email_error').fadeIn( function() {
			setTimeout(function() {
				$("#c_enquirer_email").focus();
			},500);
		});
		return false;
	}
	else
	{
			$('#c_enquirer_email_error').fadeOut( function() {
			setTimeout(function() {
				$("#c_enquirer_email").focus();
			},500);
			});
	}
	var atpos=c_enquirer_email.indexOf("@");
	var dotpos=c_enquirer_email.lastIndexOf(".");
	if (atpos<1 || dotpos<atpos+2 || dotpos+2>=c_enquirer_email.length)
	{
			$('#c_enquirer_email_error').fadeIn( function() {
			setTimeout(function() {
			$("#c_enquirer_email").focus();
			},500);
		});
		return false;
	} 
	else
	{
			$('#c_enquirer_email_error').fadeOut( function() {
			setTimeout(function() {
			$("#c_enquirer_email").focus();
			},500);
			});
	}
	
	if(c_enquirer_phone=="" || c_enquirer_phone==" " || isNaN(c_enquirer_phone)|| c_enquirer_phone.indexOf(" ")!=-1 || c_enquirer_phone.length > 12 || c_enquirer_phone.length <10  || /(.)\1\1\1\1\1+/g.test(c_enquirer_phone) )
	{
		$('#c_enquirer_phone_error').fadeIn( function() 
		{
			setTimeout(function() 
			{
				$("#c_enquirer_phone").focus();
			},500);
		});
		return false;
	}
	else
	{ 
		$('#c_enquirer_phone_error').fadeOut( function() 
		{
			setTimeout(function() 
			{
				$("#c_enquirer_phone").focus();
			},500);
		});
	}
	
	document.getElementById("submit").style.display = 'none';
	document.getElementById("loader").style.display = 'block';
	
	$.ajax
	({
		type:"POST",
		url:"course_enquiry.php",
		data:{c_enquirer_name:c_enquirer_name,c_enquirer_email:c_enquirer_email,c_enquirer_phone:c_enquirer_phone,course_title:course_title},
		success:function(result)
		{
			$("#enquire_courseid").html(result);
		}
	});
}

//2.Contact form 
function validContact()
{
	var contact_name = document.getElementById("contact_name").value; 
	var contact_email = document.getElementById("contact_email").value; 
	var contact_no = document.getElementById("contact_no").value;
	var contact_message = document.getElementById("contact_message").value;
	
	if(contact_name==" " || contact_name=="" || !(/^[a-zA-Z\s]+$/.test(contact_name)))
	{
		$("#contact_name_error").fadeIn(function()
		{
			setTimeout(function()
			{
				$("#contact_name").focus();
			},500);
		});
		return false;
	}
	else
	{
		$("#contact_name_error").fadeOut(function()
		{
			setTimeout(function()
			{
				$("#contact_name").focus();
			},500);
		});	
	}
	
	
	if (contact_email==null || contact_email=="")
	{
			$('#contact_email_error').fadeIn( function() {
			setTimeout(function() {
				$("#contact_email").focus();
			},500);
		});
		return false;
	}
	else
	{
			$('#contact_email_error').fadeOut( function() {
			setTimeout(function() {
				$("#contact_email").focus();
			},500);
			});
	}
	var atpos=contact_email.indexOf("@");
	var dotpos=contact_email.lastIndexOf(".");
	if (atpos<1 || dotpos<atpos+2 || dotpos+2>=contact_email.length)
	{
			$('#contact_email_error').fadeIn( function() {
			setTimeout(function() {
			$("#contact_email").focus();
			},500);
		});
		return false;
	} 
	else
	{
			$('#contact_email_error').fadeOut( function() {
			setTimeout(function() {
			$("#contact_email").focus();
			},500);
			});
	}
	
	if(contact_no=="" || contact_no==" " || isNaN(contact_no)|| contact_no.indexOf(" ")!=-1 || contact_no.length > 12 || contact_no.length <10  || /(.)\1\1\1\1\1+/g.test(contact_no) )
	{
		$('#contact_no_error').fadeIn( function() 
		{
			setTimeout(function() 
			{
				$("#contact_no").focus();
			},500);
		});
		return false;
	}
	else
	{ 
		$('#contact_no_error').fadeOut( function() 
		{
			setTimeout(function() 
			{
				$("#contact_no").focus();
			},500);
		});
	}
	
	document.getElementById("submit").style.display = 'none';
	document.getElementById("loader").style.display = 'block';
	
	$.ajax
	({
		type:"POST",
		url:"contact-us-save.php",
		data:{contact_name:contact_name,contact_email:contact_email,contact_no:contact_no,contact_message:contact_message},
		success:function(result)
		{
			$("#contact_form").html(result);
		}
	});
}

//3. Career form 
function validCareer(str)
{
	var CandidateName = document.getElementById("CandidateName").value; 
	var CandidateEmail = document.getElementById("CandidateEmail").value; 
	var CandidateMobile = document.getElementById("CandidateMobile").value;
	var Experience = document.getElementById("Experience").value;
	var Qualification = document.getElementById("Qualification").value;
	var applyfor = document.getElementById("applyfor").value;
	var Message = document.getElementById("Message").value;
	var CandidateResume = document.getElementById("CandidateResume").value;
	
	if(CandidateName==" " || CandidateName=="" || !(/^[a-zA-Z\s]+$/.test(CandidateName)))
	{
		$("#CandidateName_error").fadeIn(function()
		{
			setTimeout(function()
			{
				$("#CandidateName").focus();
			},500);
		});
		return false;
	}
	else
	{
		$("#CandidateName_error").fadeOut(function()
		{
			setTimeout(function()
			{
				$("#CandidateName").focus();
			},500);
		});	
	}
	
	
	if (CandidateEmail==null || CandidateEmail=="")
	{
			$('#CandidateEmail_error').fadeIn( function() {
			setTimeout(function() {
				$("#CandidateEmail").focus();
			},500);
		});
		return false;
	}
	else
	{
			$('#CandidateEmail_error').fadeOut( function() {
			setTimeout(function() {
				$("#CandidateEmail").focus();
			},500);
			});
	}
	var atpos=CandidateEmail.indexOf("@");
	var dotpos=CandidateEmail.lastIndexOf(".");
	if (atpos<1 || dotpos<atpos+2 || dotpos+2>=CandidateEmail.length)
	{
			$('#CandidateEmail_error').fadeIn( function() {
			setTimeout(function() {
			$("#CandidateEmail").focus();
			},500);
		});
		return false;
	} 
	else
	{
			$('#CandidateEmail_error').fadeOut( function() {
			setTimeout(function() {
			$("#CandidateEmail").focus();
			},500);
			});
	}
	
	if(CandidateMobile=="" || CandidateMobile==" " || isNaN(CandidateMobile)|| CandidateMobile.indexOf(" ")!=-1 || CandidateMobile.length > 12 || CandidateMobile.length <10  || /(.)\1\1\1\1\1+/g.test(CandidateMobile) )
	{
		$('#CandidateMobile_error').fadeIn( function() 
		{
			setTimeout(function() 
			{
				$("#CandidateMobile").focus();
			},500);
		});
		return false;
	}
	else
	{ 
		$('#CandidateMobile_error').fadeOut( function() 
		{
			setTimeout(function() 
			{
				$("#CandidateMobile").focus();
			},500);
		});
	}
	
	if(Experience==" " || Experience=="")
	{
		$("#Experience_error").fadeIn(function()
		{
			setTimeout(function()
			{
				$("#Experience").focus();
			},500);
		});
		return false;
	}
	else
	{
		$("#Experience_error").fadeOut(function()
		{
			setTimeout(function()
			{
				$("#Experience").focus();
			},500);
		});	
	}
	
	if(Qualification==" " || Qualification=="")
	{
		$("#Qualification_error").fadeIn(function()
		{
			setTimeout(function()
			{
				$("#Qualification").focus();
			},500);
		});
		return false;
	}
	else
	{
		$("#Qualification_error").fadeOut(function()
		{
			setTimeout(function()
			{
				$("#Qualification").focus();
			},500);
		});	
	}
	
	var applyfor = $("#applyfor option:selected").val();
	if(applyfor==" " || applyfor=="")
	{
		$("#applyfor_error").fadeIn(function()
		{
			setTimeout(function()
			{
				$("#applyfor").focus();
			},500);
		});
		return false;
	}
	else
	{
		$("#applyfor_error").fadeOut(function()
		{
			setTimeout(function()
			{
				$("#applyfor").focus();
			},500);
		});	
	}
	
	if(CandidateResume==" " || CandidateResume=="")
	{
		$("#CandidateResume_error").fadeIn(function()
		{
			setTimeout(function()
			{
				$("#CandidateResume").focus();
			},500);
		});
		return false;
	}
	else
	{
		$("#CandidateResume_error").fadeOut(function()
		{
			setTimeout(function()
			{
				$("#CandidateResume").focus();
			},500);
		});	
	}
	
	document.getElementById("submit").style.display = 'none';
	document.getElementById("loader").style.display = 'block';
	
	$.ajax
	({
		type:"POST",
		url:"career-save.php",
		data:{CandidateName:CandidateName,CandidateEmail:CandidateEmail,CandidateMobile:CandidateMobile,Experience:Experience,Qualification:Qualification,applyfor:applyfor,Message:Message,CandidateName:CandidateName},
		success:function(result)
		{
			$("#career_id").html(result);
		}
	});
}

//6./* ================ Back to top button. ================ */
	var winScroll = $(window).scrollTop();
	if (winScroll > 1) {
		$('#to-top').css({bottom:"10px"});
	} else {
		$('#to-top').css({bottom:"-100px"});
	}
	$(window).on("scroll",function(){
		winScroll = $(window).scrollTop();
				
		//  Show Hide back to top button.
		if (winScroll > 1) {
			$('#to-top').css({opacity:1,bottom:"10px"});
		} else {
			$('#to-top').css({opacity:0,bottom:"-100px"});
		}
	});
	$('#to-top').click(function(){
		$('html, body').animate({scrollTop: '0px'}, 800);
		return false;
	});

//4. sticky scroll menu

window.onscroll = function() {myFunction()};

var navbar = document.getElementById("navbar");
var sticky = navbar.offsetTop;

function myFunction() {
  if (window.pageYOffset >= sticky) {
    navbar.classList.add("sticky")
  } else {
    navbar.classList.remove("sticky");
  }
}


// 4. Suggession save
function suggessionbox()
{
	var suggessionmessage=document.getElementById("suggessionmessage").value;
	
	if(suggessionmessage==" " || suggessionmessage=="")
	{
		$("#suggessionmessage_error").fadeIn(function()
		{
			setTimeout(function()
			{
				$("#suggessionmessage").focus();
			},500);
		});
		return false;
	}
	else
	{
		$("#suggessionmessage_error").fadeOut(function()
		{
			setTimeout(function()
			{
				$("#suggessionmessage").focus();
			},500);
		});	
	}
	
	document.getElementById("submitsuggession").style.display = 'none';
	document.getElementById("loding").style.display = 'block';
	$.ajax
	({
		type:"POST",
		url:"suggessionmessage.php",
		data:{suggessionmessage:suggessionmessage},
		success:function(result)
		{
			$("#myDiv").html(result);
		}
	});

}
//5./* ================ hide site tools after 3 seconds. ================ */
	var toolLeft = $('.tools').css('right'),
		thisLink = $('#skinCSS').attr('href');
		
	$('.show-tools').click(function(e){
		e.preventDefault();
    	if($(this).parent().css('right') == toolLeft){
    		$(this).parent().animate({right:'0px'});
    	}else if($(this).parent().css('right') == '0px'){
    		$(this).parent().animate({right:toolLeft});
    	}
	});
	$('.show-tools-close').click(function(e){
		e.preventDefault();
    	if($('.inner-tools').parent().css('right') == toolLeft){
    		$('.inner-tools').parent().animate({right:'0px'});
    	}else if($('.inner-tools').parent().css('right') == '0px'){
    		$('.inner-tools').parent().animate({right:toolLeft});
    	}
	});
	
