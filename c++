#include <iostream>
#include <basicas.cpp>

using namespace std;

struct trabajador;
struct productos;
struct cliente;
struct colaClientes;

struct caja{
    string codigo;
    trabajador *tra;
    colaClientes *cC;
};

struct nodoCaja{
    caja *info;
    nodoCaja *sgte;
    nodoCaja *ante;
};

struct listaCaja{
    nodoCaja *cab;
    int nCaj;
};

struct nodoProductoComprado{
    productos *pro;
    nodoProductoComprado *sgte;
    nodoProductoComprado *ante;
};

struct listaProductosComprados{
    nodoProductoComprado *cab;
    int nProCom;
};

struct venta{
    string fecha;
    string hora;
    string codigo;
    float montoVenta;
    float igv;
    float descuento;
    float montoTotalDescu;
    cliente *cli;
    caja *caj;
    listaProductosComprados *lPC;
};

struct nodoVenta{
    venta *info;
    nodoVenta *sgte;
    nodoVenta *ant;
};

struct listaVentas{
    nodoVenta *cab;
    int nVentas;
};

struct cliente{
    string nombre, codigo;
    string apellido;
    int dni;
    int telefono;
    bool genero;
    listaProductosComprados *lPC;

};

struct nodoCliente{
    cliente *info;
    nodoCliente *sgte;
    nodoCliente *ant;
};

struct listaClientes{
    nodoCliente *cab;
    int nCli;
};

struct trabajador{
    string codigo;
    string nombre;
    string apellido;
    unsigned short edad;
    bool genero;
};

struct nodoTrabajador{
    trabajador *info;
    nodoTrabajador *sgte;
    nodoTrabajador *ant;
};

struct listaTrabajadores{
    nodoTrabajador *cab;
    int nTra;
};

struct nodoTrabajadorcito{
    trabajador *info;
    nodoTrabajadorcito *sgt;
};

struct pilaExpediente{
    nodoTrabajadorcito *cima;
    unsigned short nTraba;
};



struct productos{
    string codigo;
    string marca;
    string nombre;
    //
    float precio;
    //
    string descripcion;
    int stock;
};

//struct  productosComprados{
//    int cantidad;
//};

struct nodoProducto{
    productos *info;
    nodoProducto *sgte;
    nodoProducto *ant;
};

struct listaProductos{
    nodoProducto *cab;
    int nPro;
};

struct categoria{
    string nombre;
    listaProductos *lP;
};

struct nodoCategoria{
    categoria *info;
    nodoCategoria *sgte;
    nodoCategoria *ant;
};

struct listaCategorias{
    nodoCategoria *cab;
    int nCat;
};


struct nodoClienteCola{
    cliente *info;
    nodoClienteCola *sgte;
};

struct colaClientes{
    nodoClienteCola *atras;
    nodoClienteCola *adelante;
    unsigned short nPer;
};

struct sede{
    string codigo;
    string ubicacion;
    unsigned short capacidad;
    listaCategorias *lCat;
    listaTrabajadores *lT;
    listaClientes *lC;
    listaCaja *lCaj;
    listaVentas *lV;
};

struct nodoSede{
    sede *info;
    nodoSede *sgte;
    struct arista *adyacente;
};

struct arista{
    nodoSede *destino;
    arista *sgte;
};

struct grafoSede{
    nodoSede *nS;
    arista *aristaC;
};



struct discoteca{
    string nombre;
    string codigo;
    string duenio;
    string ruc;
    string direccion;
    pilaExpediente *pE;
    grafoSede *gS;
};

