// ============================================================
// 函数名称: sub_467208
// 虚拟地址: 0x467208
// WARP GUID: 0fc10a8a-658b-566a-9bfd-5a4805403f4b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_467280, sub_4043ac, sub_403ee0, sub_466f3c, sub_4093b0, sub_40423c, sub_4671e0, sub_403df8
// [被调用的父级函数]: sub_4e5e3c
// ============================================================

void* __convention("regparm")sub_467208(void* arg1, int32_t arg2, char** arg3)
{
    // 第一条实际指令: char** var_14 = arg3
    char** var_14 = arg3
    int32_t eax_1 = sub_4671e0(arg1, arg2)
    
    if (eax_1 s<= 0)
        void* result = arg3
        sub_403df8(result)
        return result
    
    sub_403ee0(arg3, 0, eax_1)
    int32_t var_18_1 = eax_1
    sub_467280(sub_40423c(*arg3), arg2, arg1, &var_14)
    
    if (var_14.b == 1 || var_14.b == 2)
        return sub_4043ac(arg3, sub_4093b0(sub_40423c(*arg3)))
    
    sub_466f3c(arg2)
    noreturn
}
