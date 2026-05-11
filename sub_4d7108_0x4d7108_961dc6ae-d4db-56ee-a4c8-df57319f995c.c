// ============================================================
// 函数名称: sub_4d7108
// 虚拟地址: 0x4d7108
// WARP GUID: 961dc6ae-d4db-56ee-a4c8-df57319f995c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404308, sub_40c024, sub_4042c0, sub_404188, sub_40401c, sub_403e1c, sub_404280, sub_403010
// [被调用的父级函数]: sub_4d727c
// ============================================================

int32_t __convention("regparm")sub_4d7108(char* arg1, char* arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_218 = ebx
    int32_t esi
    int32_t var_21c = esi
    int32_t edi
    int32_t var_220 = edi
    int32_t var_214 = 0
    void* var_210 = nullptr
    char* var_20c = nullptr
    int32_t var_208 = 0
    int32_t ecx
    ecx.b = *arg2
    char var_204[0x100]
    __builtin_memcpy(&var_204, arg2, ecx + 1)
    int32_t ecx_2
    ecx_2.b = *arg1
    char var_104[0x100]
    int32_t ecx_4 = __builtin_memcpy(&var_104, arg1, ecx_2 + 1)
    int32_t* var_224 = &var_4
    int32_t (* var_228)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_40401c(ecx_4, &var_104)
    void* i_1
    int32_t ecx_5
    i_1, ecx_5 = sub_40c024(var_208, *(arg3 - 4))
    void* i_2
    
    for (void* i = i_1; i s> 0; i = i_2)
        if (i s> 0)
            void* edx_2
            edx_2.b = var_104[0]
            
            if (add_overflow(edx_2, i))
                sub_403010()
                noreturn
            
            sub_404280(1, edx_2 + i, *(arg3 - 4), &var_20c)
            sub_404188(var_20c, 0x4d7278)
            int32_t ecx_8
            
            if (edx_2 != neg.d(i))
                int32_t ecx_9
                ecx_9.b = var_104[0]
                ecx_8 = sub_4042c0(arg3 - 4, i, ecx_9)
            else
                int32_t ecx_6
                ecx_6.b = var_104[0]
                
                if (add_overflow(ecx_6, 1))
                    sub_403010()
                    noreturn
                
                ecx_8 = sub_4042c0(arg3 - 4, i, ecx_6 + 1)
            
            sub_40401c(ecx_8, &var_204)
            ecx_5 = sub_404308(var_210, arg3 - 4, i)
            int32_t ebx_1
            ebx_1.b = 1
        
        sub_40401c(ecx_5, &var_104)
        i_2, ecx_5 = sub_40c024(var_214, *(arg3 - 4))
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_224_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4d7265
    return sub_403e1c(&var_214, 4)
}
