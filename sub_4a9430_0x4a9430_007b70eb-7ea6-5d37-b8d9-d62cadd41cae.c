// ============================================================
// 函数名称: sub_4a9430
// 虚拟地址: 0x4a9430
// WARP GUID: 007b70eb-7ea6-5d37-b8d9-d62cadd41cae
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_415df8, sub_40cc98, sub_4a9498
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4a9430(void* arg1, void* arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        *(arg1 + 0x70) = arg2
        return 
    
    if (*(arg2 + 4) != 0)
        void* eax_4 = *(arg1 + 0x70)
        
        if (eax_4 != 0 && *(eax_4 + 4) == 0)
            sub_40cc98(arg1 + 0x70)
        
        *(arg1 + 0x70) = arg2
        sub_415df8(arg2, arg1)
    else
        if (*(sub_4a9498(arg1) + 4) != 0)
            *(arg1 + 0x70) = 0
        
        (*(*sub_4a9498(arg1) + 8))()
    
    *(*(arg1 + 0x70) + 0x78) = arg1
}
