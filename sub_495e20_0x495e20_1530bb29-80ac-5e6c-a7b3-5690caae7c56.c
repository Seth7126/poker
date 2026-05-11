// ============================================================
// 函数名称: sub_495e20
// 虚拟地址: 0x495e20
// WARP GUID: 1530bb29-80ac-5e6c-a7b3-5690caae7c56
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: WSAGetLastError, send
// [内部子函数调用]: sub_4032ac, sub_4128c0, sub_4038c8, sub_4128b4, sub_4953dc, sub_4953e8, sub_495dd8, sub_4128a4, sub_40b454
// [被调用的父级函数]: sub_4962e0
// ============================================================

int32_t __convention("regparm")sub_495e20(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t* var_1004 = arg1
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    sub_4953dc(arg1)
    int32_t __saved_ebp
    int32_t* var_101c = &__saved_ebp
    int32_t (* var_1020)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_9 = 0
    
    if (arg1[3] != 0)
        if (arg1[1] == 0xffffffff || arg1[2].b == 0)
            sub_4038c8(ExceptionList, var_1020)
            int32_t result
            result.b = var_9
            return result
        
        while (true)
            sub_4128a4(arg1[3])
            int32_t eax_9 = (*(*arg1[3] + 4))()
            
            if (eax_9 s<= 0)
                esp_1[0x406] = &__saved_ebp
                sub_495dd8()
                esp_1[0x406]
                esp_1 = &esp_1[0x407]
                break
            
            esp_1[0x406] = 0
            esp_1[0x405] = eax_9
            void var_1014
            esp_1[0x404] = &var_1014
            esp_1[0x403] = arg1[1]
            int32_t eax_12 = send()
            esp_1 = &esp_1[0x407]
            
            if (eax_12 == 0xffffffff)
                int32_t eax_13
                int32_t ecx_2
                eax_13, ecx_2 = WSAGetLastError()
                int32_t var_14 = eax_13
                
                if (var_14 == 0x2733)
                    sub_4128b4(arg1[3])
                else
                    *(esp_1 - 4) = &var_14
                    ecx_2.b = 1
                    int32_t ebx_1
                    ebx_1.w = 0xfffe
                    sub_4032ac(arg1, nop)
                    arg1[1]
                    (*(*arg1 + 8))()
                    *(esp_1 - 4) = &__saved_ebp
                    sub_495dd8()
                    *(esp_1 - 4)
                    
                    if (0 != arg1[0xa].b)
                        sub_40b454()
                        noreturn
                
                break
            
            if (eax_12 s>= eax_9)
                if (sub_4128a4(arg1[3]) == sub_4128c0(arg1[3]))
                    *(esp_1 - 4) = &__saved_ebp
                    sub_495dd8()
                    *(esp_1 - 4)
                    break
            else
                sub_4128b4(arg1[3])
        
        char var_9_1 = 1
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = 0x495f87
    return sub_4953e8(arg1)
}
