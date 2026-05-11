// ============================================================
// 函数名称: sub_41c978
// 虚拟地址: 0x41c978
// WARP GUID: ec3a5acf-2642-5d4f-8e1e-378bb8acfb17
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41c9fc, sub_41ca88, sub_4128c0, sub_4128a4
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_41c978(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_10 = ecx
    int32_t* ebx = arg2
    
    if (*(arg1 + 0x20) == 0)
        return 
    
    (*(*ebx + 8))(0)
    int32_t eax_3 = sub_4128a4(ebx) - 4
    
    if (*(arg1 + 0x24) == 0)
        sub_41ca88(arg1, ebx)
    else
        ebx = sub_41c9fc(arg1, ebx)
    
    (*(*ebx + 0xc))(eax_3)
    (*(*ebx + 8))(sub_4128c0(ebx) - eax_3)
    int32_t ecx_4
    ecx_4.w = 2
    (*(*ebx + 0xc))()
}
