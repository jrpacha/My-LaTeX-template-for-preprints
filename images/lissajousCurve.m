% Lissajous curves
clearvars
close all

fName='lissajousCurve';
fExt='.png';

a=5.0;
b=3.0;
A=2.0;
B=1.0;
delta=pi/4;

t=linspace(0,2*pi,300);
t=t(1:end-1);

x=A*sin(a*t+delta);
y=B*cos(b*t);

fig = figure();
plot(x,y,'-b')
xlabel('$$x$$','interpreter','LaTeX','fontSize',14)
ylabel('$$y$$','interpreter','LaTeX','rot',360,'fontSize',14)

saveas(fig,[fName,fExt],'png')