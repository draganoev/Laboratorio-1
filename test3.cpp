#include <allegro.h>

int main()
{
   allegro_init();
   install_keyboard();
   set_color_depth(16);
   set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);

   clear_to_color(screen, makecol(0, 128, 128));

   while (!key[KEY_ESC])
   {
      circlefill(screen, rand() % 640, rand() % 480, rand() % 64, makecol(rand() % 256, 0, 0));
   }

   return 0;
}
