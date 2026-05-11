// ============================================================
// 函数名称: sub_43945c
// 虚拟地址: 0x43945c
// WARP GUID: e9395949-d48b-5825-8715-0f74d25a23d7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40423c, sub_4042c0, sub_408b14, sub_404078
// [被调用的父级函数]: sub_4394b8
// ============================================================

int32_t __convention("regparm")sub_43945c(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (sub_404078(*arg1) s>= sub_404078(arg2))
        int32_t eax_5 = sub_404078(arg2)
        char* eax_7 = sub_40423c(arg2)
        
        if (sub_408b14(sub_40423c(*arg1), eax_7, eax_5) == 0)
            result.b = 1
            sub_4042c0(arg1, 1, sub_404078(arg2))
    
    return result
}
