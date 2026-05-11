// ============================================================
// 函数名称: sub_403500
// 虚拟地址: 0x403500
// WARP GUID: 1e4c7709-ea00-5655-9c1a-73d4066b9a3f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RaiseException
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_403898
// ============================================================

void __fastcallsub_403500(int32_t arg1, uint32_t arg2)
{
    // 第一条实际指令: if (data_52e008 u<= 1)
    if (data_52e008 u<= 1)
        return 
    
    uint32_t arguments = arg2
    RaiseException(0xeedfae2, 0, 1, &arguments)
    noreturn
}
