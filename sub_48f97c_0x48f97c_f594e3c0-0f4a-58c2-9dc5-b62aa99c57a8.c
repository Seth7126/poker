// ============================================================
// 函数名称: sub_48f97c
// 虚拟地址: 0x48f97c
// WARP GUID: f594e3c0-0f4a-58c2-9dc5-b62aa99c57a8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4128a4, sub_403010
// [被调用的父级函数]: sub_490ef8
// ============================================================

int32_t __convention("regparm")sub_48f97c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_8_1 = ecx
    int32_t* edi = *arg1
    
    if (edi == 0)
        arg1[4].b = 1
        return 0xffffffff
    
    int32_t eax_2 = sub_4128a4(edi)
    
    if (add_overflow(eax_2, neg.d(arg1[1])))
        sub_403010()
        noreturn
    
    if (not(add_overflow(arg1[2], neg.d(eax_2 - arg1[1]))))
        return (*(**arg1 + 4))()
    
    sub_403010()
    noreturn
}
