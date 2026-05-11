// ============================================================
// 函数名称: sub_40ca50
// 虚拟地址: 0x40ca50
// WARP GUID: db697ab5-10bd-5dbc-b251-42c26286c6e1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: EnterCriticalSection, Sleep, InterlockedIncrement, ResetEvent, LeaveCriticalSection, InterlockedExchange, GetCurrentThreadId
// [内部子函数调用]: sub_405340, sub_4054f4
// [被调用的父级函数]: sub_4ade4c
// ============================================================

struct _EXCEPTION_REGISTRATION_RECORD* __convention("regparm")sub_40ca50(struct _EXCEPTION_REGISTRATION_RECORD* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = ExceptionList_2
    struct _EXCEPTION_REGISTRATION_RECORD* result_1 = arg1
    EnterCriticalSection(&result_1->Handler)
    int32_t* var_18_1 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (result_1->__offset(0x34).b == 0)
        esp_1 = &result_1
        
        if (InterlockedIncrement(&result_1[4]) == 1)
            ResetEvent(result_1->__offset(0x1c).d)
            esp_1 = &result_1
        
        int32_t var_c_2 = 0
        uint32_t var_10_1 = GetCurrentThreadId()
        int32_t ebx = 0xffffffff
        
        while (true)
            result_1->__offset(0x28).d
            
            if (sub_405340() s<= var_c_2)
                break
            
            if (*(result_1->__offset(0x28).d + (var_c_2 << 3)) == var_10_1)
                break
            
            if (*(result_1->__offset(0x28).d + (var_c_2 << 3)) == 0 && ebx s< 0)
                ebx = var_c_2
            
            var_c_2 += 1
        
        result_1->__offset(0x28).d
        
        if (sub_405340() s> var_c_2)
            int32_t eax_36 = result_1->__offset(0x28).d
            *(eax_36 + (var_c_2 << 3) + 4) += 1
        else
            if (ebx s< 0)
                while (true)
                    uint32_t var_c_4 = var_10_1
                    var_10_1 = &result_1[6]
                    
                    if (InterlockedExchange(var_10_1, var_c_4) == 0)
                        break
                    
                    Sleep(0)
                
                int32_t* var_c_5 = &var_4
                int32_t (* var_10_2)(void* arg1, void* arg2) = j_sub_4037f0
                ExceptionList_1 = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList_1
                result_1->__offset(0x28).d
                int32_t var_18_2 = sub_405340() + 3
                sub_4054f4()
                fsbase->NtTib.ExceptionList = ExceptionList_1
                int32_t var_c_6 = 0x40cb73
                struct _EXCEPTION_REGISTRATION_RECORD* result = result_1
                result->__offset(0x30).d = 0
                return result
            
            *(result_1->__offset(0x28).d + (ebx << 3)) = var_10_1
            *(result_1->__offset(0x28).d + (ebx << 3) + 4) = 1
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_40cbc3
    esp_1[1] = &result_1->Handler
    return LeaveCriticalSection()
}
