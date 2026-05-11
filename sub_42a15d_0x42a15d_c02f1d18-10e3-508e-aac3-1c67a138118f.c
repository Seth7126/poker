// ============================================================
// 函数名称: sub_42a15d
// 虚拟地址: 0x42a15d
// WARP GUID: c02f1d18-10e3-508e-aac3-1c67a138118f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0
// [被调用的父级函数]: sub_429f30
// ============================================================

int32_tsub_42a15d(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    int32_t result = 0
    data_531760 = 0
    
    if (data_531768 != 0)
        result = sub_4030d0(arg1[-2])
    
    *arg1
    return result
}
