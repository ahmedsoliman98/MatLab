theta = 0 : 1 : 360;
G =10;
R = 10;
Y = 10;

x = [-20 -20 40 95];
rectangle('position',x,'FaceColor','k');

hold on
x = [-2 -50 5 30];
rectangle('position',x,'FaceColor','c');
hold on

for a = 0 : 2
    % Green Light
    plot(G * sind(theta) , G * cosd(theta));
    fill(G * sind(theta) , G * cosd(theta), [0 0.5 0]);
    xlim([-100 100]);
    ylim([-100 100]);
    hold on
    % Yallow Light
    plot(Y * sind(theta) , Y * cosd(theta)+30);
    fill(Y * sind(theta) , Y * cosd(theta)+30, [1 1 0]);
    xlim([-100 100]);
    ylim([-100 100]);
    % Red light
    plot(R * sind(theta) , R * cosd(theta)+60);
    fill(R * sind(theta) , R * cosd(theta)+60, [0.5 0 0]);
    xlim([-100 100]);
    ylim([-100 100]);
    pause(3);
    % Green
    fill(G * sind(theta) , G * cosd(theta), [0 1 0]);
    xlim([-100 100]);
    ylim([-100 100]);

    plot(Y * sind(theta) , Y * cosd(theta)+30);
    fill(Y * sind(theta) , Y * cosd(theta)+30, [0.5 0.5 0]);
    xlim([-100 100]);
    ylim([-100 100]);
    
    plot(R * sind(theta) , R * cosd(theta)+60);
    fill(R * sind(theta) , R * cosd(theta)+60, [0.5 0 0]);
    xlim([-100 100]);
    ylim([-100 100]);
    pause(3);
    % Red
    fill(G * sind(theta) , G * cosd(theta), [0 0.5 0]);
    xlim([-100 100]);
    ylim([-100 100]);

    plot(Y * sind(theta) , Y * cosd(theta)+30);
    fill(Y * sind(theta) , Y * cosd(theta)+30, [0.5 0.5 0]);
    xlim([-100 100]);
    ylim([-100 100]);
    
    plot(R * sind(theta) , R * cosd(theta)+60);
    fill(R * sind(theta) , R * cosd(theta)+60, [1 0 0]);
    xlim([-100 100]);
    ylim([-100 100]);
    pause(3);
end