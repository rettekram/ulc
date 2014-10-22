(function ($) {
	setTimeout(function(){

		$('iframe').each( function() {
		    var url = $(this).attr("src")
		    $(this).attr({
		        "src" : url.replace('?rel=0', '')+"?wmode=transparent",
		        "wmode" : "Opaque"
		    }).width("480");
		});

	}, 200);
}(jQuery));