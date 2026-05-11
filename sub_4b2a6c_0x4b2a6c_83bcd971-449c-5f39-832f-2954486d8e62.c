// ============================================================
// 函数名称: sub_4b2a6c
// 虚拟地址: 0x4b2a6c
// WARP GUID: 83bcd971-449c-5f39-832f-2954486d8e62
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ee80
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4b2a6c(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    
    if (arg2 == ebx[0x7c].b)
        return 
    
    ebx[0x7c].b = arg2
    arg1.w = 0x41
    arg1.w = 0x41 & ebx[8].w
    
    if (0 == arg1.w)
        ebx[0xd]
        ebx[0xc]
        (*(*ebx + 0x7c))(ebx[0xe], ebx[0xf])
    
    sub_42ee80(ebx)
}
