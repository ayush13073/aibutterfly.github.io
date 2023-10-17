document.addEventListener("DOMContentLoaded", function() {
    
    document.querySelector(".navbar").style.display = "none";

    
    document.querySelector(".loader").style.display = "block";
    document.querySelector(".container").style.display = "none";
    document.querySelector(".footer").style.display = "none";

    
    setTimeout(function() {
        document.querySelector(".loader").style.display = "none";
        document.querySelector(".container").style.display = "block";
        document.querySelector(".footer").style.display = "block";
        document.querySelector(".navbar").style.display = "block";
    }, 4000); 
});
