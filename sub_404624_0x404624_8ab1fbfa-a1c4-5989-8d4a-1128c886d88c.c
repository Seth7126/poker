// ============================================================
// 函数名称: sub_404624
// 虚拟地址: 0x404624
// WARP GUID: 8ab1fbfa-a1c4-5989-8d4a-1128c886d88c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40460c, sub_404600, sub_402980, sub_4044d8
// [被调用的父级函数]: sub_4151c8
// ============================================================

int32_t __convention("regparm")sub_404624(int32_t* arg1, BSTR arg2)
{
    // 第一条实际指令: int32_t ebx = 0
    int32_t ebx = 0
    
    if (arg2 s> 0)
        ebx = sub_40460c(arg2)
        BSTR eax_3 = sub_404600(*arg1)
        
        if (eax_3 s> 0)
            if (arg2 s< eax_3)
                eax_3 = arg2
            
            sub_402980(*arg1, ebx, eax_3 * 2)
    
    return sub_4044d8(arg1, ebx)
}
