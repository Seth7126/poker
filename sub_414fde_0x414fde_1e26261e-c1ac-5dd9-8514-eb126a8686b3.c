// ============================================================
// 函数名称: sub_414fde
// 虚拟地址: 0x414fde
// WARP GUID: 1e26261e-c1ac-5dd9-8514-eb126a8686b3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_403844, sub_4134b8, sub_403898, sub_40ca2c, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_414fde(void* arg1 @ ebp, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t* ebp = sub_4134b8(*(arg1 - 8), nullptr)
    int32_t* ebp = sub_4134b8(*(arg1 - 8), nullptr)
    
    if (ebp[-2] == 0)
        sub_4030d0(ebp[-3])
    
    sub_403844()
    sub_403898(arg2)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg2
    sub_40ca2c(data_531618)
    fsbase->NtTib.ExceptionList = arg4
    sub_403e1c(&ebp[-0xb], 6)
    *ebp
    return ebp[-3]
}
