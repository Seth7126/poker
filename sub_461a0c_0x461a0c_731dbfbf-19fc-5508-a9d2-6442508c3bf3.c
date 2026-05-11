// ============================================================
// 函数名称: sub_461a0c
// 虚拟地址: 0x461a0c
// WARP GUID: 731dbfbf-19fc-5508-a9d2-6442508c3bf3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_461314, sub_461360, sub_46143c
// [被调用的父级函数]: sub_461a84
// ============================================================

int32_t* __convention("regparm")sub_461a0c(int32_t* arg1)
{
    // 第一条实际指令: sub_461314(arg1, 0xd8)
    sub_461314(arg1, 0xd8)
    int32_t i = 0
    int32_t* esi = &arg1[0x10]
    
    do
        if (*esi != 0)
            sub_461360(arg1, i)
        
        i += 1
        esi = &esi[1]
    while (i s< 4)
    
    if (arg1[0x2b] == 0)
        int32_t* i_1 = nullptr
        void* esi_1 = &arg1[0x14]
        
        do
            if (*esi_1 != 0)
                sub_46143c(arg1, i_1, 0)
            
            if (*(esi_1 + 0x10) != 0)
                sub_46143c(arg1, i_1, 1)
            
            i_1 += 1
            esi_1 += 4
        while (i_1 s< 4)
    
    return sub_461314(arg1, 0xd9)
}
