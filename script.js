document.addEventListener('DOMContentLoaded',
function() {
    setTimeout(()=>{
    var elems = document.querySelectorAll('.sidenav'); 
    var instances = M.Sidenav.init(elems); 
  },2000);
  }
);
window.onload = ()=>{
   
    AOS.init({
    duration: 1000,
    delay: 5,
    });
    }
$(document).ready(function(){
    $(".log-in").click(function(){
        $(".home").hide();
    });
    $(".log-in").click(function(){
        $(".login-form,nav-form").show();
    });
});
