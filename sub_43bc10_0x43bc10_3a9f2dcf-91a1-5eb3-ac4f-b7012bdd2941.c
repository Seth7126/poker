// ============================================================
// 函数名称: sub_43bc10
// 虚拟地址: 0x43bc10
// WARP GUID: 3a9f2dcf-91a1-5eb3-ac4f-b7012bdd2941
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43b94c
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_43bc10(void* arg1)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    
    if (*(ebx + 0x2d) == 0)
        return 
    
    if (*(ebx + 0x82) == 0)
    label_43bc50:
        
        if ((*(ebx + 0x20) & 0x10) == 0 && *(ebx + 0x38) != 0)
            (*(**(ebx + 0x38) + 0x18))()
        else if (*(ebx + 0x82) != 0)
            *(ebx + 0x84)
            (*(ebx + 0x80))()
    else
        if (sub_43b94c(ebx) == 0)
            goto label_43bc50
        
        if (*(sub_43b94c(ebx) + 0x30) == *(ebx + 0x80))
            goto label_43bc50
        
        *(ebx + 0x84)
        (*(ebx + 0x80))()
}
