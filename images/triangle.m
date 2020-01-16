clearvars
close all

fName='triangle';
fExt='png';

fontS = 14;

a=[0.0,0.0];
b=[7.0,0.0];
c=[4.5,2.5];

points=[a;b;c;a];

t = b/norm(b);
d = dot(c,t)*t;
lineCD = [c;d];

fig=figure();
plot(points(:,1),points(:,2),'-','color','k','linewidth',2)
axis equal
axis off
text(-0.2,-0.3,'$A$','interpreter','LaTeX','fontsize',fontS)
text(6.9,-0.3,'$B$','interpreter','LaTeX','fontsize',fontS)
text(4.4,2.7,'$C$','interpreter','LaTeX','fontsize',fontS)
hold on
plot(lineCD(:,1),lineCD(:,2),'--','color','k','linewidth',1)
text(d(1,1)-0.1,-0.3,'$D$','interpreter','LaTeX','fontsize',fontS)
hold off

saveas(fig,[fName,'.',fExt],fExt)