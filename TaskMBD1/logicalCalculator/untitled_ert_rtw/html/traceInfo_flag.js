function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["untitled.c:37c51"]=1;
    this.traceFlag["untitled.c:44c52"]=1;
    this.traceFlag["untitled.c:51c52"]=1;
    this.traceFlag["untitled.c:57c34"]=1;
    this.traceFlag["untitled.c:57c44"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["untitled.c:37"]=1;
    this.lineTraceFlag["untitled.c:44"]=1;
    this.lineTraceFlag["untitled.c:51"]=1;
    this.lineTraceFlag["untitled.c:57"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
