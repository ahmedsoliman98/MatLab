function varargout = simpleCalculator(varargin)
% SIMPLECALCULATOR MATLAB code for simpleCalculator.fig
%      SIMPLECALCULATOR, by itself, creates a new SIMPLECALCULATOR or raises the existing
%      singleton*.
%
%      H = SIMPLECALCULATOR returns the handle to a new SIMPLECALCULATOR or the handle to
%      the existing singleton*.
%
%      SIMPLECALCULATOR('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in SIMPLECALCULATOR.M with the given input arguments.
%
%      SIMPLECALCULATOR('Property','Value',...) creates a new SIMPLECALCULATOR or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before simpleCalculator_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to simpleCalculator_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help simpleCalculator

% Last Modified by GUIDE v2.5 04-Jan-2022 20:49:48

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @simpleCalculator_OpeningFcn, ...
                   'gui_OutputFcn',  @simpleCalculator_OutputFcn, ...
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


% --- Executes just before simpleCalculator is made visible.
function simpleCalculator_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to simpleCalculator (see VARARGIN)
global Oper;
Oper = -1;
global Number1;
Number1 = 0;
global Number2;
Number2 = 0;

global OperRT;
OperRT = -1;
global vecX;
vecX = [0 , 0 , 0];
global vecY;
vecY = [0 , 0 , 0];

% Choose default command line output for simpleCalculator
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes simpleCalculator wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = simpleCalculator_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function Number1_Callback(hObject, eventdata, handles)

global Number1;
Number1 = str2double(get(handles.Number1,'String'));

% hObject    handle to Number1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of Number1 as text
%        str2double(get(hObject,'String')) returns contents of Number1 as a double


% --- Executes during object creation, after setting all properties.
function Number1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Number1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function Number2_Callback(hObject, eventdata, handles)
global Number2;
Number2 = str2double(get(handles.Number2,'String'));
% hObject    handle to Number2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of Number2 as text
%        str2double(get(hObject,'String')) returns contents of Number2 as a double


% --- Executes during object creation, after setting all properties.
function Number2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Number2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on selection change in LeftOpr.
function LeftOpr_Callback(hObject, eventdata, handles)
global Oper;
Oper = get(handles.LeftOpr,'Value');
switch(Oper)
    case 1
        set(handles.OperatorLeft,'String','+');
    case 2
        set(handles.OperatorLeft,'String','-');
    case 3
        set(handles.OperatorLeft,'String','*');
    case 4
        set(handles.OperatorLeft,'String','/');
        
end
% hObject    handle to LeftOpr (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns LeftOpr contents as cell array
%        contents{get(hObject,'Value')} returns selected item from LeftOpr


% --- Executes during object creation, after setting all properties.
function LeftOpr_CreateFcn(hObject, eventdata, handles)
% hObject    handle to LeftOpr (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: listbox controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in EqualLeft.
function EqualLeft_Callback(hObject, eventdata, handles)
global Number1;
global Number2;
global Oper;
if Number2 == 0 && Oper == 4
    set(handles.ErrorConsAppear,'String','Divide by 0 detect');
elseif Oper == -1
    set(handles.ErrorConsAppear,'String','No Operator detect');
elseif ~isnumeric(Number1)  || ~isnumeric(Number2) 
    set(handles.ErrorConsAppear,'String','Must Enter number !!');
else

    switch(Oper)
        case 1
            set(handles.Reasult,'String',Number1+Number2);
            set(handles.ErrorConsAppear,'String','No Error detect');
        case 2
            set(handles.Reasult,'String',Number1-Number2);
            set(handles.ErrorConsAppear,'String','No Error detect');
        case 3
            set(handles.Reasult,'String',Number1*Number2);
            set(handles.ErrorConsAppear,'String','No Error detect');
        case 4
            set(handles.Reasult,'String',Number1/Number2);
            set(handles.ErrorConsAppear,'String','No Error detect');
    end
end
            %set(handles.Reasult,'String',num2str(Number1+Number2));
% hObject    handle to EqualLeft (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)



function edit4_Callback(hObject, eventdata, handles)
% hObject    handle to edit4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit4 as text
%        str2double(get(hObject,'String')) returns contents of edit4 as a double


% --- Executes during object creation, after setting all properties.
function edit4_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit5_Callback(hObject, eventdata, handles)
global vecY;
vecY = str2num(get(handles.edit5,'String'));
% hObject    handle to edit5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit5 as text
%        str2double(get(hObject,'String')) returns contents of edit5 as a double


% --- Executes during object creation, after setting all properties.
function edit5_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function Eqaution_Callback(hObject, eventdata, handles)
% hObject    handle to Eqaution (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of Eqaution as text
%        str2double(get(hObject,'String')) returns contents of Eqaution as a double


% --- Executes during object creation, after setting all properties.
function Eqaution_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Eqaution (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on selection change in OperatorRight.
function OperatorRight_Callback(hObject, eventdata, handles)
global OperRT;
OperRT = get(handles.OperatorRight,'Value');
switch(OperRT)
    case 1
        set(handles.OperatorRt,'String','+');
    case 2
        set(handles.OperatorRt,'String','-');
    case 3
        set(handles.OperatorRt,'String','*');
    case 4
        set(handles.OperatorRt,'String','/');
        
end
% hObject    handle to OperatorRight (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns OperatorRight contents as cell array
%        contents{get(hObject,'Value')} returns selected item from OperatorRight


% --- Executes during object creation, after setting all properties.
function OperatorRight_CreateFcn(hObject, eventdata, handles)
% hObject    handle to OperatorRight (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: listbox controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in EqualRight.
function EqualRight_Callback(hObject, eventdata, handles)
% hObject    handle to EqualRight (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in Draw.
function Draw_Callback(hObject, eventdata, handles)
global vecX;
global vecY;
blah = get(handles.drawingList,'SelectedObject');
draw = get(blah,'String');

switch(draw)
    case 'x_axis'
        plot(vecX,0);
    case 'y_axis'
        plot(0,vecY);
    case 'xy_axis'
        plot(vecX,vecY);
    case 'equation'
        y = get(handles.Eqaution,'String');
        ezplot(y);
    case 'Sine'
        plot(sin(0:.1:10));
    case 'cosine'
        plot(cos(0:.1:10));
end
% hObject    handle to Draw (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes during object creation, after setting all properties.
function OperatorLeft_CreateFcn(hObject, eventdata, handles)
%set(handles.OperatorLeft,'String','a7eh');
% hObject    handle to OperatorLeft (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called


% --- Executes during object deletion, before destroying properties
function OperatorLeft_DeleteFcn(hObject, eventdata, handles)
% hObject    handle to OperatorLeft (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)



function edit7_Callback(hObject, eventdata, handles)
global vecX;
vecX = str2num(get(handles.edit7,'String'));

% hObject    handle to edit7 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit7 as text
%        str2double(get(hObject,'String')) returns contents of edit7 as a double


% --- Executes during object creation, after setting all properties.
function edit7_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit7 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton4.
function pushbutton4_Callback(hObject, eventdata, handles)
global vecX;
global vecY;
global OperRT;

if OperRT == -1
    set(handles.ErrorConsAppear,'String','No Operator detect');
elseif numel(vecX) ~= numel(vecY)
    set(handles.ErrorConsAppear,'String','The vector element not equal');
else

    switch(OperRT)
        case 1
            set(handles.ReasultRightTxt,'String',num2str(vecX+vecY));
            set(handles.ErrorConsAppear,'String','No Error detect');
        case 2
            set(handles.ReasultRightTxt,'String',num2str(vecX-vecY));
            set(handles.ErrorConsAppear,'String','No Error detect');
        case 3
            set(handles.ReasultRightTxt,'String',num2str(vecX.*vecY));
            set(handles.ErrorConsAppear,'String','No Error detect');
        case 4
            set(handles.ReasultRightTxt,'String',num2str(vecX./vecY));
            set(handles.ErrorConsAppear,'String','No Error detect');
    end
end
% hObject    handle to pushbutton4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
