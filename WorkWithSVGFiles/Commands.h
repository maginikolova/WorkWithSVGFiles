#ifndef COMMANDS_H
#define COMMANDS_H


class Commands
{
    private:
        static Shape* shape;
        static int anja;
    public:
        void open(char*);
        void close();
        void save();
        void saveAs();
        void exit();
        void print();
        void create();
        void eraseFigure();
        void translate();
        void within();

        void counter();
};

#endif // COMMANDS_H
