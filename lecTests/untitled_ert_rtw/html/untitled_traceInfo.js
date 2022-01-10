function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "untitled"};
	this.sidHashMap["untitled"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "untitled:9"};
	this.sidHashMap["untitled:9"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "untitled:2"};
	this.sidHashMap["untitled:2"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/PWM"] = {sid: "untitled:5"};
	this.sidHashMap["untitled:5"] = {rtwname: "<Root>/PWM"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "untitled:10"};
	this.sidHashMap["untitled:10"] = {rtwname: "<Root>/Scope"};
	this.rtwnameHashMap["<Root>/Slider Gain"] = {sid: "untitled:9"};
	this.sidHashMap["untitled:9"] = {rtwname: "<Root>/Slider Gain"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "untitled:9:30"};
	this.sidHashMap["untitled:9:30"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/Slider Gain"] = {sid: "untitled:9:31"};
	this.sidHashMap["untitled:9:31"] = {rtwname: "<S1>/Slider Gain"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "untitled:9:32"};
	this.sidHashMap["untitled:9:32"] = {rtwname: "<S1>/y"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
