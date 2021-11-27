/* Подключаем библиотеку GTK+ */
# include <gtk/gtk.h>
int main( int argc, char *argv[])
{
        /* Объявляем виджеты */
        GtkWidget *label;       // Метка
        GtkWidget *window;      // Главное окно
        /* Инициализируем GTK+ */
        gtk_init(&argc, &argv);
        /* Создаем главное окно */
        window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
        /* Устанавливаем заголовок окна "Здравствуй, мир!" */
        gtk_window_set_title(GTK_WINDOW(window), "Здравствуй, мир!");
        /* Создаем метку с текстом "Здравствуй, мир!" */
        label = gtk_label_new("Здравствуй, мир!");
        /* Вставляем метку в главное окно */
        gtk_container_add(GTK_CONTAINER(window), label);
        /* Показываем окно вместе с виджетами */
        gtk_widget_show_all(window);
        /* Соединяем сигнал завершения с выходом из программы */
        g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
        /* Приложение переходит в вечный цикл ожидания действий пользователя */
        gtk_main();
        return 0;
}
