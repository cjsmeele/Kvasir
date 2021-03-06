#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Interrupts
    namespace IntreqDrqsel{    ///<DMA Request Selection Register
        using Addr = Register::Address<0x40031000,0x0000001f,0x00000000,unsigned>;
        ///The interrupt signal of the external interrupt ch.3 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> exint3{}; 
        ///The interrupt signal of the external interrupt ch.2 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> exint2{}; 
        ///The interrupt signal of the external interrupt ch.1 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> exint1{}; 
        ///The interrupt signal of the external interrupt ch.0 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> exint0{}; 
        ///The transmission interrupt signal of the MFS ch.7 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mfs7tx{}; 
        ///The reception interrupt signal of the MFS ch.7 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mfs7rx{}; 
        ///The transmission interrupt signal of the MFS ch.6 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mfs6tx{}; 
        ///The reception interrupt signal of the MFS ch.6 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mfs6rx{}; 
        ///The transmission interrupt signal of the MFS ch.5 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mfs5tx{}; 
        ///The reception interrupt signal of the MFS ch.5 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mfs5rx{}; 
        ///The transmission interrupt signal of the MFS ch.4 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mfs4tx{}; 
        ///The reception interrupt signal of the MFS ch.4 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mfs4rx{}; 
        ///The transmission interrupt signal of the MFS ch.3 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mfs3tx{}; 
        ///The reception interrupt signal of the MFS ch.3 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mfs3rx{}; 
        ///The transmission interrupt signal of the MFS ch.2 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mfs2tx{}; 
        ///The reception interrupt signal of the MFS ch.2 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mfs2rx{}; 
        ///The transmission interrupt signal of the MFS ch.1 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mfs1tx{}; 
        ///The reception interrupt signal of the MFS ch.1 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mfs1rx{}; 
        ///The transmission interrupt signal of the MFS ch.0 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mfs0tx{}; 
        ///The reception interrupt signal of the MFS ch.0 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mfs0rx{}; 
        ///The IRQ0 interrupt signal of the base timer ch.6 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> irq0bt6{}; 
        ///The IRQ0 interrupt signal of the base timer ch.4 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> irq0bt4{}; 
        ///The IRQ0 interrupt signal of the base timer ch.3 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> irq0bt2{}; 
        ///The IRQ0 interrupt signal of the base timer ch.0 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> irq0bt0{}; 
        ///The scan conversion interrupt signal of the A/D converter unit 2 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adcscan2{}; 
        ///The scan conversion interrupt signal of the A/D converter unit 1 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> adcscan1{}; 
        ///The scan conversion interrupt signal of the A/D converter unit 0 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adcscan0{}; 
    }
    namespace IntreqExc02mon{    ///<EXC02 batch read register
        using Addr = Register::Address<0x40031010,0xfffffffc,0x00000000,unsigned>;
        ///Hardware watchdog timer interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hwint{}; 
        ///External NMIX pin interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmi{}; 
    }
    namespace IntreqIrq00mon{    ///<IRQ00 Batch Read Register
        using Addr = Register::Address<0x40031014,0xfffffffe,0x00000000,unsigned>;
        ///Anomalous frequency detection by CSV interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcsint{}; 
    }
    namespace IntreqIrq01mon{    ///<IRQ01 Batch Read Register
        using Addr = Register::Address<0x40031018,0xfffffffe,0x00000000,unsigned>;
        ///Software watchdog timer interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swwdtint{}; 
    }
    namespace IntreqIrq02mon{    ///<IRQ02 Batch Read Register
        using Addr = Register::Address<0x4003101c,0xfffffffe,0x00000000,unsigned>;
        ///Low voltage detection (LVD) interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lvdint{}; 
    }
    namespace IntreqIrq03mon{    ///<IRQ03 Batch Read Register
        using Addr = Register::Address<0x40031020,0xfffffff0,0x00000000,unsigned>;
        ///WFG timer 54 interrupt request in MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wave0int3{}; 
        ///WFG timer 32 interrupt request in MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wave0int2{}; 
        ///WFG timer 10 interrupt request in MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wave0int1{}; 
        ///DTIF (motor emergency stop) interrupt request in MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wave0int0{}; 
    }
    namespace IntreqIrq04mon{    ///<IRQ04 Batch Read Register
        using Addr = Register::Address<0x40031024,0xffffff80,0x00000000,unsigned>;
        ///Interrupt request on external interrupt ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> extint6{}; 
        ///Interrupt request on external interrupt ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> extint5{}; 
        ///Interrupt request on external interrupt ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> extint4{}; 
        ///Interrupt request on external interrupt ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint3{}; 
        ///Interrupt request on external interrupt ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint2{}; 
        ///Interrupt request on external interrupt ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint1{}; 
        ///Interrupt request on external interrupt ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint0{}; 
    }
    namespace IntreqIrq05mon{    ///<IRQ05 Batch Read Register
        using Addr = Register::Address<0x40031028,0xffffff7f,0x00000000,unsigned>;
        ///Interrupt request on external interrupt ch.15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> extint15{}; 
    }
    namespace IntreqIrq06mon{    ///<IRQ06 Batch Read Register
        using Addr = Register::Address<0x4003102c,0xffffc000,0x00000000,unsigned>;
        ///PC match and RC match interrupt request on QPRC ch.1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> qud1int5{}; 
        ///Interrupt request detected RC out of range on QPRC ch.1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> qud1int4{}; 
        ///PC count invert interrupt request on QPRC ch.1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> qud1int3{}; 
        ///Overflow/underflow/zero index interrupt request on QPRC ch.1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> qud1int2{}; 
        ///PC and RC match interrupt request on QPRC ch.1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> qud1int1{}; 
        ///PC match interrupt request on QPRC ch.1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> qud1int0{}; 
        ///PC match and RC match interrupt request on QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> qud0int5{}; 
        ///Interrupt request detected RC out of range on QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> qud0int4{}; 
        ///PC count invert interrupt request on QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> qud0int3{}; 
        ///Overflow/underflow/zero index interrupt request on QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qud0int2{}; 
        ///PC and RC match interrupt request on QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> qud0int1{}; 
        ///PC match interrupt request on QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qud0int0{}; 
        ///Dual timer 2 interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timint2{}; 
        ///Dual timer 1 interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timint1{}; 
    }
    namespace IntreqIrq07mon{    ///<IRQ07 Batch Read Register
        using Addr = Register::Address<0x40031030,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request on MFS ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
    }
    namespace IntreqIrq08mon{    ///<IRQ08 Batch Read Register
        using Addr = Register::Address<0x40031034,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request on MFS ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq09mon{    ///<IRQ09 Batch Read Register
        using Addr = Register::Address<0x40031038,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request on MFS ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
    }
    namespace IntreqIrq10mon{    ///<IRQ10 Batch Read Register
        using Addr = Register::Address<0x4003103c,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request on MFS ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq11mon{    ///<IRQ11 Batch Read Register
        using Addr = Register::Address<0x40031040,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request on MFS ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
    }
    namespace IntreqIrq12mon{    ///<IRQ12 Batch Read Register
        using Addr = Register::Address<0x40031044,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request on MFS ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq13mon{    ///<IRQ13 Batch Read Register
        using Addr = Register::Address<0x40031048,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request on MFS ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
    }
    namespace IntreqIrq14mon{    ///<IRQ14 Batch Read Register
        using Addr = Register::Address<0x4003104c,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request on MFS ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq15mon{    ///<IRQ15 Batch Read Register
        using Addr = Register::Address<0x40031050,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request on MFS ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
    }
    namespace IntreqIrq16mon{    ///<IRQ16 Batch Read Register
        using Addr = Register::Address<0x40031054,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request on MFS ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq17mon{    ///<IRQ17 Batch Read Register
        using Addr = Register::Address<0x40031058,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request on MFS ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
    }
    namespace IntreqIrq18mon{    ///<IRQ18 Batch Read Register
        using Addr = Register::Address<0x4003105c,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request on MFS ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq19mon{    ///<IRQ19 Batch Read Register
        using Addr = Register::Address<0x40031060,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request on MFS ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
    }
    namespace IntreqIrq20mon{    ///<IRQ20 Batch Read Register
        using Addr = Register::Address<0x40031064,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request on MFS ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq21mon{    ///<IRQ21 Batch Read Register
        using Addr = Register::Address<0x40031068,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request on MFS ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
    }
    namespace IntreqIrq22mon{    ///<IRQ22 Batch Read Register
        using Addr = Register::Address<0x4003106c,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request on MFS ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq23mon{    ///<IRQ23 Batch Read Register
        using Addr = Register::Address<0x40031070,0xfffffff8,0x00000000,unsigned>;
        ///Interrupt request on PPG ch.4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ppgint2{}; 
        ///Interrupt request on PPG ch.2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ppgint1{}; 
        ///Interrupt request on PPG ch.0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ppgint0{}; 
    }
    namespace IntreqIrq24mon{    ///<IRQ24 Batch Read Register
        using Addr = Register::Address<0x40031074,0xffffffe8,0x00000000,unsigned>;
        ///Watch counter interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wcint{}; 
        ///Stabilization wait completion interrupt request for main PLL oscillation 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mpllint{}; 
        ///Stabilization wait completion interrupt request for sub-clock oscillation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> soscint{}; 
        ///Stabilization wait completion interrupt request for main clock oscillation 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscint{}; 
    }
    namespace IntreqIrq25mon{    ///<IRQ25 Batch Read Register
        using Addr = Register::Address<0x40031078,0xfffffff0,0x00000000,unsigned>;
        ///Conversion result comparison interrupt request in the corresponding A/D unit 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adcint3{}; 
        ///FIFO overrun interrupt request in the corresponding A/D unit 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adcint2{}; 
        ///Scan conversion interrupt request in the corresponding A/D unit 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adcint1{}; 
        ///Priority conversion interrupt request in the corresponding A/D unit 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adcint0{}; 
    }
    namespace IntreqIrq26mon{    ///<IRQ26 Batch Read Register
        using Addr = Register::Address<0x4003107c,0xfffffff0,0x00000000,unsigned>;
        ///Conversion result comparison interrupt request in the corresponding A/D unit 1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adcint3{}; 
        ///FIFO overrun interrupt request in the corresponding A/D unit 1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adcint2{}; 
        ///Scan conversion interrupt request in the corresponding A/D unit 1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adcint1{}; 
        ///Priority conversion interrupt request in the corresponding A/D unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adcint0{}; 
    }
    namespace IntreqIrq28mon{    ///<IRQ28 Batch Read Register
        using Addr = Register::Address<0x40031084,0xffffffc0,0x00000000,unsigned>;
        ///Zero detection interrupt request on the free run timer ch.2 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frt0int5{}; 
        ///Zero detection interrupt request on the free run timer ch.1 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> frt0int4{}; 
        ///Zero detection interrupt request on the free run timer ch.0 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> frt0int3{}; 
        ///Peak value detection interrupt request on the free run timer ch.2 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> frt0int2{}; 
        ///Peak value detection interrupt request on the free run timer ch.1 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> frt0int1{}; 
        ///Peak value detection interrupt request on the free run timer ch.0 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frt0int0{}; 
    }
    namespace IntreqIrq29mon{    ///<IRQ29 Batch Read Register
        using Addr = Register::Address<0x40031088,0xfffffff0,0x00000000,unsigned>;
        ///Interrupt request on the input capture ch.3 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> icu0int3{}; 
        ///Interrupt request on the input capture ch.2 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icu0int2{}; 
        ///Interrupt request on the input capture ch.1 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> icu0int1{}; 
        ///Interrupt request on the input capture ch.0 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> icu0int0{}; 
    }
    namespace IntreqIrq30mon{    ///<IRQ30 Batch Read Register
        using Addr = Register::Address<0x4003108c,0xffffffc0,0x00000000,unsigned>;
        ///Interrupt request on the output compare ch.5 in the MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ocu0int5{}; 
        ///Interrupt request on the output compare ch.4 in the MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ocu0int4{}; 
        ///Interrupt request on the output compare ch.3 in the MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ocu0int3{}; 
        ///Interrupt request on the output compare ch.2 in the MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ocu0int2{}; 
        ///Interrupt request on the output compare ch.1 in the MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ocu0int1{}; 
        ///Interrupt request on the output compare ch.0 in the MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ocu0int0{}; 
    }
    namespace IntreqIrq31mon{    ///<IRQ31 Batch Read Register
        using Addr = Register::Address<0x40031090,0xffff0000,0x00000000,unsigned>;
        ///IRQ1 interrupt request on the base timer ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> btint15{}; 
        ///IRQ0 interrupt request on the base timer ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> btint14{}; 
        ///IRQ1 interrupt request on the base timer ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> btint13{}; 
        ///IRQ0 interrupt request on the base timer ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> btint12{}; 
        ///IRQ1 interrupt request on the base timer ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> btint11{}; 
        ///IRQ0 interrupt request on the base timer ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> btint10{}; 
        ///IRQ1 interrupt request on the base timer ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> btint9{}; 
        ///IRQ0 interrupt request on the base timer ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> btint8{}; 
        ///IRQ1 interrupt request on the base timer ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btint7{}; 
        ///IRQ0 interrupt request on the base timer ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btint6{}; 
        ///IRQ1 interrupt request on the base timer ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btint5{}; 
        ///IRQ0 interrupt request on the base timer ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btint4{}; 
        ///IRQ1 interrupt request on the base timer ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btint3{}; 
        ///IRQ0 interrupt request on the base timer ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btint2{}; 
        ///IRQ1 interrupt request on the base timer ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        ///IRQ0 interrupt request on the base timer ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
    }
    namespace IntreqIrq38mon{    ///<IRQ38 Batch Read Register
        using Addr = Register::Address<0x400310ac,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request on DMA ch.0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace IntreqIrq39mon{    ///<IRQ39 Batch Read Register
        using Addr = Register::Address<0x400310b0,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request on DMA ch.1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace IntreqIrq40mon{    ///<IRQ40 Batch Read Register
        using Addr = Register::Address<0x400310b4,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request on DMA ch.2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace IntreqIrq41mon{    ///<IRQ41 Batch Read Register
        using Addr = Register::Address<0x400310b8,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request on DMA ch.3.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace IntreqIrq42mon{    ///<IRQ42 Batch Read Register
        using Addr = Register::Address<0x400310bc,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request on DMA ch.4.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace IntreqIrq43mon{    ///<IRQ43 Batch Read Register
        using Addr = Register::Address<0x400310c0,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request on DMA ch.5.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace IntreqIrq44mon{    ///<IRQ44 Batch Read Register
        using Addr = Register::Address<0x400310c4,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request on DMA ch.6.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace IntreqIrq45mon{    ///<IRQ45 Batch Read Register
        using Addr = Register::Address<0x400310c8,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request on DMA ch.7.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
}
