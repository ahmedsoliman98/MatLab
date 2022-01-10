function varargout = TrafficLightArduino(varargin)
% TRAFFICLIGHTARDUINO MATLAB code for TrafficLightArduino.fig
%      TRAFFICLIGHTARDUINO, by itself, creates a new TRAFFICLIGHTARDUINO or raises the existing
%      singleton*.
%
%      H = TRAFFICLIGHTARDUINO returns the handle to a new TRAFFICLIGHTARDUINO or the handle to
%      the existing singleton*.
%
%      TRAFFICLIGHTARDUINO('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in TRAFFICLIGHTARDUINO.M with the given input arguments.
%
%      TRAFFICLIGHTARDUINO('Property','Value',...) creates a new TRAFFICLIGHTARDUINO or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before TrafficLightArduino_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to TrafficLightArduino_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help TrafficLightArduino

% Last Modified by GUIDE v2.5 10-Jan-2022 18:01:02

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @TrafficLightArduino_OpeningFcn, ...
                   'gui_OutputFcn',  @TrafficLightArduino_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before TrafficLightArduino is made visible.
function TrafficLightArduino_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to TrafficLightArduino (see VARARGIN)
global Arduino;
Arduino = arduino('COM3','Uno');
configurePin(Arduino,'D7','DigitalOutput');
configurePin(Arduino,'D6','DigitalOutput');
configurePin(Arduino,'D5','DigitalOutput');

global Manual_Flag;
Manual_Flag = 0;
global Auto_Flag;
Auto_Flag = 0;
% Choose default command line output for TrafficLightArduino
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes TrafficLightArduino wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = TrafficLightArduino_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in autoMode.
function autoMode_Callback(hObject, eventdata, handles)
% hObject    handle to autoMode (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global Auto_Flag;
global Manual_Flag;
global Arduino
Manual_Flag = 0;
Auto_Flag = 1;
counter = 120;
set(handles.manualMode,'Value',0)
writeDigitalPin(Arduino,'D7',0);
writeDigitalPin(Arduino,'D6',0);
writeDigitalPin(Arduino,'D5',0);
while get(handles.autoMode,'Value') == 1
    while counter > 0 && get(handles.autoMode,'Value') == 1
        set(handles.autoScreen,'String',counter);
        writeDigitalPin(Arduino,'D7',0);
        writeDigitalPin(Arduino,'D6',1);
        writeDigitalPin(Arduino,'D5',0);
        pause(1);
        counter= counter - 1;
    end
    counter = 10;
    while counter > 0 && get(handles.autoMode,'Value') == 1
        set(handles.autoScreen,'String',counter);
        writeDigitalPin(Arduino,'D7',1);
        writeDigitalPin(Arduino,'D6',0);
        writeDigitalPin(Arduino,'D5',0);
        pause(1);
        counter= counter - 1;
    end
    counter = 120;
end
    
% Hint: get(hObject,'Value') returns toggle state of autoMode


% --- Executes on button press in manualMode.
function manualMode_Callback(hObject, eventdata, handles)
% hObject    handle to manualMode (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global Manual_Flag;
global Auto_Flag;
global Arduino
Auto_Flag = 0;
Manual_Flag = 1;
set(handles.autoScreen,'String','Green');
set(handles.autoMode,'Value',0)
writeDigitalPin(Arduino,'D7',1);
writeDigitalPin(Arduino,'D6',0);
writeDigitalPin(Arduino,'D5',0);
% Hint: get(hObject,'Value') returns toggle state of manualMode


% --- Executes on button press in GreenManual.
function GreenManual_Callback(hObject, eventdata, handles)
% hObject    handle to GreenManual (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global Arduino
global Manual_Flag
if Manual_Flag == 1
    writeDigitalPin(Arduino,'D7',1);
    writeDigitalPin(Arduino,'D6',0);
    writeDigitalPin(Arduino,'D5',0);
    set(handles.ManualScreen,'String','Green');
end

% --- Executes on button press in RedManual.
function RedManual_Callback(hObject, eventdata, handles)
% hObject    handle to RedManual (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global Arduino
global Manual_Flag
if Manual_Flag == 1
    writeDigitalPin(Arduino,'D7',0);
    writeDigitalPin(Arduino,'D6',1);
    writeDigitalPin(Arduino,'D5',0);
    set(handles.ManualScreen,'String','Red');
end


% --- Executes on button press in YellowManual.
function YellowManual_Callback(hObject, eventdata, handles)
% hObject    handle to YellowManual (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global Arduino
global Manual_Flag
if Manual_Flag == 1
    writeDigitalPin(Arduino,'D7',0);
    writeDigitalPin(Arduino,'D6',0);
    writeDigitalPin(Arduino,'D5',1);
    set(handles.ManualScreen,'String','Yellow');
end
