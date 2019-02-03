/*
 * This file is part of the  distribution (https://github.com/wifi-drone-esp32 or http://wifi-drone-esp32.github.io).
 * Copyright (c) 2019 Michal Schwarz.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef Index_html_h
#define Index_html_h

const char INDEX_HTML[] PROGMEM = "<!DOCTYPE html><html>  <head>    <meta http-equiv=\"Content-type\" content=\"text/html; charset=utf-8\"/>    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">  <style type=\"text/css\">#left-cross, #right-cross {  border: solid black 1px;  position: absolute;  bottom: 10px;  left: 10px; }#right-cross {  right: 10px;  left: initial; }#switch-arming {  width: 20px;  height: 20px;  position: absolute;  left: calc(50% - 10px); }</style></head>  <body>    <input type=\"checkbox\" id=\"switch-arming\">  <script type=\"text/javascript\">!function(t){var e={};function n(i){if(e[i])return e[i].exports;var r=e[i]={i:i,l:!1,exports:{}};return t[i].call(r.exports,r,r.exports,n),r.l=!0,r.exports}n.m=t,n.c=e,n.d=function(t,e,i){n.o(t,e)||Object.defineProperty(t,e,{enumerable:!0,get:i})},n.r=function(t){\"undefined\"!=typeof Symbol&&Symbol.toStringTag&&Object.defineProperty(t,Symbol.toStringTag,{value:\"Module\"}),Object.defineProperty(t,\"__esModule\",{value:!0})},n.t=function(t,e){if(1&e&&(t=n(t)),8&e)return t;if(4&e&&\"object\"==typeof t&&t&&t.__esModule)return t;var i=Object.create(null);if(n.r(i),Object.defineProperty(i,\"default\",{enumerable:!0,value:t}),2&e&&\"string\"!=typeof t)for(var r in t)n.d(i,r,function(e){return t[e]}.bind(null,r));return i},n.n=function(t){var e=t&&t.__esModule?function(){return t.default}:function(){return t};return n.d(e,\"a\",e),e},n.o=function(t,e){return Object.prototype.hasOwnProperty.call(t,e)},n.p=\"\",n(n.s=1)}([function(t){t.exports={app_name:\"RC Controller\",controls_id:\"controls\",lc_id:\"left-cross\",rc_id:\"right-cross\",switch_arming_id:\"switch-arming\",switch_on_value:100,switch_off_value:0,axis_size:220,axis_style:\"lightgray\",control_point_style:\"black\",control_point_size:10,control_range:130,control_range_offset:25,xhr_filter:100}},function(t,e,n){n(3),t.exports=n(2)},function(t,e,n){},function(t,e,n){\"use strict\";function i(t,e){for(var n=0;n<e.length;n++){var i=e[n];i.enumerable=i.enumerable||!1,i.configurable=!0,\"value\"in i&&(i.writable=!0),Object.defineProperty(t,i.key,i)}}n.r(e);var r=function(){function t(e,n){!function(t,e){if(!(t instanceof e))throw new TypeError(\"Cannot call a class as a function\")}(this,t),this.config=n,this.document=e,this.canvas_objects=null}var e,n,r;return e=t,(n=[{key:\"print\",value:function(){var t,e;for(t in this.append_controls_to_page(),this.canvas_objects)(e=this.canvas_objects[t]).width=this.config.axis_size,e.height=this.config.axis_size}},{key:\"get_control_point_size\",value:function(){return this.config.control_point_size}},{key:\"get_canvas_objects\",value:function(){if(!this.is_controls_in_page())throw\"Chces canvas, ale oni jeste nejsou na strance\";return this.canvas_objects}},{key:\"get_switch_arming_object\",value:function(){var t=this.document.getElementById(this.config.switch_arming_id);if(!(t instanceof HTMLInputElement))throw\"Cannot find arming_switch\";return t}},{key:\"append_controls_to_page\",value:function(){var t=this.document.createElement(\"div\");t.id=this.config.controls_id,this.canvas_objects=this.create_canvas_objects(this.document),t.appendChild(this.canvas_objects[this.config.lc_id]),t.appendChild(this.canvas_objects[this.config.rc_id]),this.document.body instanceof HTMLElement&&this.document.body.appendChild(t)}},{key:\"is_controls_in_page\",value:function(){var t=!1;return this.document.getElementById(this.config.controls_id)&&(t=!0),t}},{key:\"create_canvas_objects\",value:function(t){var e={};return e[this.config.lc_id]=t.createElement(\"canvas\"),e[this.config.rc_id]=t.createElement(\"canvas\"),e[this.config.lc_id].id=this.config.lc_id,e[this.config.rc_id].id=this.config.rc_id,e}},{key:\"draw_control_point\",value:function(t,e){var n=e.getContext(\"2d\");this.clear_canvas(e),n.fillStyle=this.config.control_point_style,n.fillRect(t.x-this.get_control_point_size()/2,t.y-this.get_control_point_size()/2,this.get_control_point_size(),this.get_control_point_size())}},{key:\"clear_canvas\",value:function(t){var e=t.getContext(\"2d\");e.clearRect(0,0,t.width,t.height),e.fillStyle=this.config.axis_style,e.fillRect(this.config.axis_size/2,0,1,t.height),e.fillRect(0,this.config.axis_size/2,t.width,1)}}])&&i(e.prototype,n),r&&i(e,r),t}();var o=function t(){!function(t,e){if(!(t instanceof e))throw new TypeError(\"Cannot call a class as a function\")}(this,t),this.left_horizontal=50,this.left_vertical=0,this.right_horizontal=50,this.right_vertical=50,this.switch_arming=0};function s(t,e){for(var n=0;n<e.length;n++){var i=e[n];i.enumerable=i.enumerable||!1,i.configurable=!0,\"value\"in i&&(i.writable=!0),Object.defineProperty(t,i.key,i)}}var a=function(){function t(e){!function(t,e){if(!(t instanceof e))throw new TypeError(\"Cannot call a class as a function\")}(this,t),this.actual_state=null,this.is_sending_needed=!0,this.is_xhr_in_progress=!1,this.last_state_change_request=null,this.xhr=e;var n=this;this.xhr.addEventListener(\"loadend\",function(){n.set_xhr_done()})}var e,n,i;return e=t,(n=[{key:\"set_state_changed\",value:function(t){this.actual_state=t,this.send_request(t)}},{key:\"set_xhr_done\",value:function(){this.is_xhr_in_progress=!1,this.last_state_change_request instanceof o&&(this.send_request(this.last_state_change_request),this.last_state_change_request=null)}},{key:\"send_request\",value:function(t){this.is_xhr_in_progress?this.last_state_change_request=t:(this.xhr.abort(),this.xhr.open(\"GET\",\"/control\"+this.get_state_querystring(t),!0),this.is_xhr_in_progress=!0,this.xhr.send())}},{key:\"get_state_querystring\",value:function(t){var e=\"?\";return e+=\"y=\"+t.left_horizontal,e+=\"&t=\"+t.left_vertical,e+=\"&p=\"+t.right_horizontal,e+=\"&r=\"+t.right_vertical,e+=\"&1=\"+t.switch_arming}}])&&s(e.prototype,n),i&&s(e,i),t}();function c(t,e){for(var n=0;n<e.length;n++){var i=e[n];i.enumerable=i.enumerable||!1,i.configurable=!0,\"value\"in i&&(i.writable=!0),Object.defineProperty(t,i.key,i)}}var _=function(){function t(e,n,i){!function(t,e){if(!(t instanceof e))throw new TypeError(\"Cannot call a class as a function\")}(this,t),this.printer=e,this.state=i,this.listener=null,this.config=n}var e,n,i;return e=t,(n=[{key:\"add_listeners\",value:function(){var t,e=this.printer.get_canvas_objects();for(t in e)this.add_touchstart(e[t]),this.add_touchmove(e[t]),this.add_touchend(e[t]);this.add_switch_arming_change(this.printer.get_switch_arming_object())}},{key:\"add_switch_arming_change\",value:function(t){var e=this;t.addEventListener(\"change\",function(t){t.preventDefault(),e.state.switch_arming=this.checked?e.config.switch_on_value:e.config.switch_off_value,e.listener instanceof a&&e.listener.set_state_changed(e.state)},!1)}},{key:\"add_touchstart\",value:function(t){var e=this;t.addEventListener(\"touchstart\",function(n){n.preventDefault();var i=e.get_touch_for_canvas(t,n.changedTouches),r=e.get_touch_coords(t,i),o=e.get_real_coords(t,i);e.process_state_change(o,t),e.printer.draw_control_point(r,t)},!1)}},{key:\"add_touchmove\",value:function(t){var e=this;t.addEventListener(\"touchmove\",function(n){n.preventDefault();var i=e.get_touch_for_canvas(t,n.changedTouches),r=e.get_touch_coords(t,i),o=e.get_real_coords(t,i);e.process_state_change(o,t),e.printer.draw_control_point(r,t)},!1)}},{key:\"add_touchend\",value:function(t){var e=this;t.addEventListener(\"touchend\",function(n){n.preventDefault();var i=e.get_touch_for_canvas(t,n.changedTouches),r=e.get_touch_coords(t,i),o=e.get_real_coords(t,i);r.x=e.config.axis_size/2,o.x=e.config.axis_size/2,t.id===e.config.rc_id&&(r.y=e.config.axis_size/2,o.y=e.config.axis_size/2),e.process_state_change(o,t),e.printer.draw_control_point(r,t)},!1)}},{key:\"set_state_listener\",value:function(t){this.listener=t}},{key:\"process_state_change\",value:function(t,e){var n=Number.parseInt(e.width.toString()),i=Number.parseInt(e.height.toString()),r=100*Number.parseInt(t.x),o=100*Number.parseInt(t.y);e.id===this.config.lc_id?(this.state.left_horizontal=Math.round(r/n),this.state.left_vertical=100-Math.round(o/i)):(this.state.right_horizontal=Math.round(r/n),this.state.right_vertical=100-Math.round(o/i)),this.call_listener(this.state)}},{key:\"call_listener\",value:function(t){this.listener instanceof a&&this.listener.set_state_changed(t)}},{key:\"get_touch_for_canvas\",value:function(t,e){var n,i=e[0];for(n=1;n<e.length;n+=1)if(e[n].target instanceof HTMLElement&&t.id===e[n].target.id){i=e[n];break}return i}},{key:\"get_touch_coords\",value:function(t,e){var n={x:e.pageX-t.offsetLeft,y:e.pageY-t.offsetTop};return this.get_coords_in_limits(t,n)}},{key:\"get_real_coords\",value:function(t,e){var n={x:e.pageX-t.offsetLeft,y:e.pageY-t.offsetTop};return this.get_real_coords_in_limits(t,n)}},{key:\"get_coords_in_limits\",value:function(t,e){var n;for(n in e)e=this.get_coord_in_limits(t,e,n);return e}},{key:\"get_real_coords_in_limits\",value:function(t,e){var n;for(n in e)e=this.get_real_coord_in_limits(t,e,n);return e}},{key:\"get_real_coord_in_limits\",value:function(t,e,n){var i=t[{x:\"width\",y:\"height\"}[n]];return e[n]<0?e[n]=0:e[n]>i&&(e[n]=i),e}},{key:\"get_coord_in_limits\",value:function(t,e,n){var i=this.printer.get_control_point_size()/2,r=t[{x:\"width\",y:\"height\"}[n]];return e[n]<i?e[n]=i:e[n]>r-i&&(e[n]=r-i),e}}])&&c(e.prototype,n),i&&c(e,i),t}(),l=n(0),h=new r(document,l),u=new _(h,l,new o),f=new XMLHttpRequest,d=new a(f);h.print();var g=h.get_canvas_objects();for(var v in g){h.clear_canvas(g[v]);var p=l.axis_size/2;v===l.lc_id&&(p=l.axis_size-l.control_point_size/2),h.draw_control_point({x:l.axis_size/2,y:p},g[v])}u.set_state_listener(d),u.add_listeners()}]);</script></body></html>";

#endif