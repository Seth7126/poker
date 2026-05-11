// ============================================================
// 函数名称: sub_430c34
// 虚拟地址: 0x430c34
// WARP GUID: bfe834fa-a795-560c-8c0a-8b2f020c64f8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ab44, sub_42e838, sub_4032ac, sub_42e7fc
// [被调用的父级函数]: sub_444fdc
// ============================================================

int32_t* __convention("regparm")sub_430c34(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t ecx
    int32_t var_10 = ecx
    var_10.b = arg2
    var_10:1.b = sub_42ab44(arg1, var_10.b).b
    int32_t* result
    
    if (*(arg1 + 0x47) != 0)
        void* i = sub_42e838(arg1) - 1
        
        if (i s>= 0)
            do
                result.b = var_10.b
                result.b &= var_10:1.b
                
                if (result.b != 0)
                    break
                
                int32_t* eax_3
                int32_t edx_1
                eax_3, edx_1 = sub_42e7fc(arg1, i)
                edx_1.b = var_10.b
                ebx.w = 0xffd6
                result.b = sub_4032ac(eax_3, edx_1).b | var_10:1.b
                var_10:1.b = result.b
                i -= 1
            while (i != 0xffffffff)
    
    result.b = var_10:1.b
    return result
}
