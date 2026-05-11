// ============================================================
// 函数名称: sub_444fdc
// 虚拟地址: 0x444fdc
// WARP GUID: ef2f030a-4014-5d74-91d5-11feef31f342
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_430c34, sub_443af0, sub_443a70, sub_443aa4
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_444fdc(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    char var_1b = 0
    HANDLE eax_1
    int32_t edx
    eax_1, edx = sub_443a70(arg1)
    
    if (eax_1 != 0)
        edx.b = arg2
        ebx.w = 0xffd6
        var_1b = sub_4032ac(eax_1, edx)
    
    void* edi_1 = sub_443aa4(arg1) - 1
    void* result
    
    if (edi_1 s>= 0)
        void* i_1 = edi_1 + 1
        int32_t var_18_1 = 0
        void* i
        
        do
            result.b = arg2
            result.b &= var_1b
            
            if (result.b != 0)
                goto label_44507a
            
            result = sub_443af0(arg1, var_18_1)
            
            if (result != eax_1)
                ebx.w = 0xffd6
                result.b = sub_4032ac(result, arg2).b | var_1b
                var_1b = result.b
            
            var_18_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    result.b = arg2
    result.b &= var_1b
    
    if (result.b == 0)
        var_1b = sub_430c34(arg1, arg2).b
    
    label_44507a:
    result.b = var_1b
    return result
}
