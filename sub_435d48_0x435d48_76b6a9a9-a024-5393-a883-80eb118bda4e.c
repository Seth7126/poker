// ============================================================
// 函数名称: sub_435d48
// 虚拟地址: 0x435d48
// WARP GUID: 76b6a9a9-a024-5393-a883-80eb118bda4e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_435d2c
// [被调用的父级函数]: sub_42feb8
// ============================================================

void* __convention("regparm")sub_435d48(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: char ebx = arg2.b
    char ebx = arg2.b
    void* result = data_530a80
    
    if (*(result + 8) != 0 && ebx != 3)
        if (ebx == 0)
            return sub_435d2c(arg1, 0)
        
        arg2.b = 1
        result = sub_435d2c(arg1, arg2)
        
        if (data_52e860 != 0)
            result = data_531798(arg1)
            
            if (result != 0)
                int32_t var_14
                int32_t var_10
                data_5317a0(result, &var_14, &var_10)
                
                if (ebx == 1)
                    data_5317a8(result, 0)
                else if (ebx == 2)
                    data_5317a8(result, 1)
                else
                    data_5317a8(result, 1)
                    data_5317a0(result, &var_14, &var_10)
                    int32_t edx
                    edx.b = ebx
                    var_14 = (var_14 & 0xfffffff4) | zx.d(*(edx + &data_52e860))
                
                data_5317a4(result, var_14, var_10)
                return data_53179c(arg1, result)
    
    return result
}
