// ============================================================
// 函数名称: sub_4ae06f
// 虚拟地址: 0x4ae06f
// WARP GUID: 9b50f984-19f9-5bb1-ac8c-6e4cad48f49e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_415d18, sub_4adc14
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4ae06f(char* arg1, int32_t arg2, int32_t* arg3, uint16_t* arg4 @ esi, long double arg5 @ st0, int32_t arg6, int32_t arg7, void* arg8, int16_t* arg9, int32_t* arg10, char* arg11)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    char temp0 = arg1[0x4f080002]
    arg1[0x4f080002] += arg1.b
    int32_t eflags
    int32_t* result = __outsb(arg2.w, *arg4, arg4, eflags)
    void* entry_ebx
    void* ebx = entry_ebx + 1
    void* esp
    
    if (temp0 + arg1.b u>= temp0)
        ebx = arg8
        arg3 = arg10
        char* result_1 = arg11
        void arg_20
        esp = &arg_20
        
        if (entry_ebx != 0xffffffff)
            arg11 = result_1
            *arg9 = int.w(arg5)
            *result_1 ^= result_1.b
            ebx:1.b *= 2
            *result_1 ^= result_1.b
            ebx:1.b *= 2
            *result_1 = &result_1[*result_1]
            *result_1 += result_1.b
            *result_1 += result_1.b
            result_1[0x80000000] += result_1.b
            *result_1
            int32_t temp2 = *(__return_addr + 0x6e) | arg3
            *(__return_addr + 0x6e) = temp2
            
            if (temp2 u>= 0)
                jump(0x4ae11e)
            
            jump(0x4ae0aa)
        
        if (entry_ebx s>= 0xffffffff)
            *(ebx - 0x5efe4d32) -= 1
            ebx.b |= arg3.b
            char temp3 = result_1.b
            result_1.b += arg3:1.b
            result_1.b = adc.b(result_1.b, 0xfb, temp3 + arg3:1.b u< temp3)
            undefined
        
        result = result_1
        arg2 = 0
    
    sub_415d18(result, arg2, arg3)
    int32_t edx_1
    edx_1.b = 1
    result[0x10] = sub_4adc14(sub_4acb0c+0x48, edx_1)
    (*(*result + 0x30))()
    
    if (ebx.b != 0)
        sub_403428(result)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp += 0x10
    
    *esp
    *(esp + 4)
    *(esp + 8)
    return result
}
