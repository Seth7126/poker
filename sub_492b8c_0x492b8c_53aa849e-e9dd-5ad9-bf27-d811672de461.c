// ============================================================
// 函数名称: sub_492b8c
// 虚拟地址: 0x492b8c
// WARP GUID: 53aa849e-e9dd-5ad9-bf27-d811672de461
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: sub_491c5c, sub_4318d0
// [被调用的父级函数]: sub_49292c, sub_51a838
// ============================================================

void __convention("regparm")sub_492b8c(uint32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t dwParam2 = arg3
    int32_t dwParam2 = arg3
    int32_t* ebx = arg1
    
    if (*(ebx + 0x2da) == 0)
        return 
    
    ebx[0xb4] = 0
    
    if (*(ebx + 0x2d6) == 0)
        ebx[0xb4] = 2
    else
        if (ebx[0xb5].b != 0)
            ebx[0xb4] = 2
        
        *(ebx + 0x2d6) = 0
    
    if (*(ebx + 0x2d7) != 0)
        if (*(ebx + 0x2d5) != 0)
            ebx[0xb4] |= 1
        
        *(ebx + 0x2d7) = 0
    
    dwParam2 = sub_4318d0(ebx)
    arg1 = mciSendCommandA(zx.d(*(ebx + 0x2da)), 0x804, ebx[0xb4], &dwParam2)
    ebx[0xbb] = arg1
    
    if (arg1 != 0)
        return 
    
    *(ebx + 0x2c9) = 0
    *(ebx + 0x2da) = 0
    *(ebx + 0x28e) = 0
    sub_491c5c(ebx)
}
