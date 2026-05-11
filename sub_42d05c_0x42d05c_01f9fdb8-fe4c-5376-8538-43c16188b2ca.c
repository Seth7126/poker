// ============================================================
// 函数名称: sub_42d05c
// 虚拟地址: 0x42d05c
// WARP GUID: 01f9fdb8-fe4c-5376-8538-43c16188b2ca
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_42d05c(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    
    if (ebx[0x14].b == 0)
        return 
    
    arg1 = ebx[9]
    
    if (arg1 != 0)
        int32_t edx
        edx.b = *(arg1 + 0x4f)
        (*(*ebx + 0x68))()
    
    ebx[0x14].b = 1
}
