// ============================================================
// 函数名称: sub_42663c
// 虚拟地址: 0x42663c
// WARP GUID: e8e9f984-c8ed-58e1-9c53-d268b33ed64c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: OpenClipboard
// [内部子函数调用]: sub_40b56c, sub_403828, sub_440cb8
// [被调用的父级函数]: sub_4265b0, sub_426a2c, sub_4266b8, sub_4268dc, sub_426874, sub_4267c4, sub_4269a8
// ============================================================

void __convention("regparm")sub_42663c(BOOL arg1)
{
    // 第一条实际指令: BOOL ebx = arg1
    BOOL ebx = arg1
    
    if (*(ebx + 4) == 0)
        int32_t eax_2 = *(*data_530660 + 0x24)
        *(ebx + 8) = eax_2
        
        if (eax_2 == 0)
            int32_t entry_ebx
            *(ebx + 8) = sub_440cb8(sub_426698, ebx.w, entry_ebx)
            *(ebx + 0xc) = 1
        
        int32_t edx_1
        arg1, edx_1 = OpenClipboard(*(ebx + 8))
        
        if (arg1 == 0)
            edx_1.b = 1
            sub_40b56c(0x407d24, edx_1, data_52fff8)
            sub_403828()
            noreturn
        
        *(ebx + 0xd) = 0
    
    *(ebx + 4) += 1
}
