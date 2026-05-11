// ============================================================
// 函数名称: sub_40c1f0
// 虚拟地址: 0x40c1f0
// WARP GUID: 4fcc8234-7638-5e2d-b659-8d293f4b43aa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40c218
// [被调用的父级函数]: sub_447f44, sub_447f54, sub_40b250
// ============================================================

void* __fastcallsub_40c1f0(int32_t arg1, char arg2)
{
    // 第一条实际指令: char* eax
    char* eax
    void* i = sub_40c218(eax, arg2)
    void* result = i
    
    if (arg2 != 0 && i != 0)
        do
            result = i
            i = sub_40c218(i + 1, arg2)
        while (i != 0)
    
    return result
}
