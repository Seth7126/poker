// ============================================================
// 函数名称: sub_406997
// 虚拟地址: 0x406997
// WARP GUID: 25fae918-a844-58c2-abd3-52282fa3bb95
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40691d
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_406997(int32_t arg1, int32_t arg2, int32_t arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: if ((arg5 & arg4) == 0xffffffff)
    if ((arg5 & arg4) == 0xffffffff)
        int32_t esi_3 = arg3 | arg2
        
        if (esi_3 == 0x80000000)
            return esi_3 - 1
    
    return sub_40691d(arg1, arg2, arg3, arg4, arg5)
}
