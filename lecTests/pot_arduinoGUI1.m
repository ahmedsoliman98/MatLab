function varargout = pot_arduinoGUI1(varargin)
% POT_ARDUINOGUI1 MATLAB code for pot_arduinoGUI1.fig
%      POT_ARDUINOGUI1, by itself, creates a new POT_ARDUINOGUI1 or raises the existing
%      singleton*.
%
%      H = POT_ARDUINOGUI1 returns the handle to a new POT_ARDUINOGUI1 or the handle to
%      the existing singleton*.
%
%      POT_ARDUINOGUI1('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in POT_ARDUINOGUI1.M with the given input arguments.
%
%      POT_ARDUINOGUI1('Property','Value',...) creates a new POT_ARDUINOGUI1 or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before pot_arduinoGUI1_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to pot_arduinoGUI1_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help pot_arduinoGUI1

% Last Modified by GUIDE v2.5 23-Jan-2022 20:13:38

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @pot_arduinoGUI1_OpeningFcn, ...
                   'gui_OutputFcn',  @pot_arduinoGUI1_OutputFcn, ...
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


% --- Executes just before pot_arduinoGUI1 is made visible.
function pot_arduinoGUI1_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to pot_arduinoGUI1 (see VARARGIN)

% Choose default command line output for pot_arduinoGUI1
handles.output = hObject;
global Arduino;
Arduino = arduino('COM3','Uno');
configurePin(Arduino,'D13','DigitalOutput');
configurePin(Arduino,'A0','AnalogInput');


% Update handles structure
guidata(hObject, handles);

% UIWAIT makes pot_arduinoGUI1 wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = pot_arduinoGUI1_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global Arduino
while(1)
    
        voltage = readVoltage(Arduino,'A0')
        
        set(handles.text2,'String',num2str(voltage));
end
        
