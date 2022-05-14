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
    $(".skill-c").click(function(){
        $(".quote").hide();
    });
    $(".skill-c").click(function(){
        $(".skill").show();
    });
});
$(document).ready(function(){
    $(".Quotes-c").click(function(){
        $(".skill").hide();
    });
    $(".Quotes-c").click(function(){
        $(".quote").show();
    });
}); 
