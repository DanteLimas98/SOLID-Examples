using System;
using System.Collections.Generic;
using System.Text;

namespace OCP{
    public abstract class CuentaDebito{
        public string NumeroTransaccion { get; set; }
        public abstract string Debito(decimal valor, string cuenta);
    }

    public class DebitoCuentaCorriente : CuentaDebito{
        public override string Debito(decimal valor, string cuenta){
            return NumeroTransaccion;
        }
    }

    public class DebitoCuentaInversion : CuentaDebito{
        public override string Debito(decimal valor, string cuenta){
            return NumeroTransaccion;
        }
    }

    public class DebitoCuentaAhorro : CuentaDebito{
        public override string Debito(decimal valor, string cuenta){
            return NumeroTransaccion;
        }
    }
}