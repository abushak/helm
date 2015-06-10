/*
 This lazySizes extension removes scroll events implements a more lazier scrollintent event instead.
 */
(function(window, document){
	/*jshint eqnull:true */
	'use strict';
	var config;
	if(window.addEventListener){
		config = (window.lazySizes && lazySizes.cfg) || window.lazySizesConfig;
		if(!config){
			config = {};
			window.lazySizesConfig = config;
		}

		config.scroll = false;

		addEventListener('scroll', (function(){
			var afterScrollTimer, checkElem, checkTimer, top, left;
			var checkFn = function(){
				var nTop = checkElem.scrollTop || checkElem.pageYOffset || 0;
				var nLeft = checkElem.scrollLeft || checkElem.pageXOffset || 0;
				checkElem = null;

				if(Math.abs(top - nTop) < 40 && Math.abs(left - nLeft) < 40){
					update();
				}
			};
			var update = function(){
				lazySizes.loader.checkElems();
				clearTimeout(afterScrollTimer);
				clearTimeout(checkTimer);
				checkElem = null;
			};

			return function(e){

				var elem = e.target == document ? window : e.target;

				clearTimeout(afterScrollTimer);
				afterScrollTimer = setTimeout(update, 66);

				if(!checkElem){
					checkElem = elem;
					top = checkElem.scrollTop || checkElem.pageYOffset || 0;
					left = checkElem.scrollLeft || checkElem.pageXOffset || 0;
					clearTimeout(checkTimer);
					checkTimer = setTimeout(checkFn, 199);
				} else if(elem != checkElem){
					update();
				}
				elem = null;
			};
		})(), true);
	}
})(window, document);
