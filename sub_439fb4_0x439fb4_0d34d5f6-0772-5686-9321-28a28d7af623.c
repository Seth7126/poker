// ============================================================
// 函数名称: sub_439fb4
// 虚拟地址: 0x439fb4
// WARP GUID: 0d34d5f6-0772-5686-9321-28a28d7af623
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4391ac, sub_43b974, sub_43b964
// [被调用的父级函数]: sub_43b908, sub_43baf0
// ============================================================

void* __convention("regparm")sub_439fb4(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_14 = arg3
    int32_t var_14 = arg3
    char ebx = arg3.b
    void* result = sub_43b964(arg1)
    
    if (result - 1 s>= 0)
        void* esi_2 = result
        int32_t ebp_1 = 0
        void* i
        
        do
            if (ebp_1 s>= arg2)
                result = sub_43b974(arg1, ebp_1)
                
                if (ebx u> *(result + 0x33))
                    result = sub_43b974(arg1, ebp_1)
                    *(result + 0x33) = ebx
            else
                result = sub_43b974(arg1, ebp_1)
                
                if (ebx u< *(result + 0x33))
                    sub_4391ac(data_5300e8)
                    noreturn
            
            ebp_1 += 1
            i = esi_2
            esi_2 -= 1
        while (i != 1)
    
    return result
}
