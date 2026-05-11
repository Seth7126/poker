// ============================================================
// 函数名称: sub_4029c0
// 虚拟地址: 0x4029c0
// WARP GUID: 4e6520bf-5ddd-53fa-b949-6952d8a6ac95
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403ee0
// [被调用的父级函数]: sub_402a38
// ============================================================

char* __convention("regparm")sub_4029c0(char* arg1, char** arg2)
{
    // 第一条实际指令: char* var_1008 = arg1
    char* var_1008 = arg1
    char** esi = arg2
    char* result = arg1
    
    while (true)
        arg1.b = *result
        
        if (arg1.b != 0 && arg1.b u<= 0x20)
            result = &result[1]
            continue
        
        if (*result != 0x22)
            break
        
        if (result[1] != 0x22)
            break
        
        result = &result[2]
    
    int32_t eax = 0
    
    while (true)
        arg2.b = *result
        
        if (arg2.b u<= 0x20 || eax s>= 0x1000)
            sub_403ee0(esi, &var_1008, eax)
            return result
        
        if (arg2.b != 0x22)
            *(&var_1008 + eax) = arg2.b
            eax += 1
            result = &result[1]
        else
            result = &result[1]
            
            while (true)
                arg2.b = *result
                
                if (arg2.b == 0)
                    break
                
                if (arg2.b == 0x22)
                    break
                
                *(&var_1008 + eax) = arg2.b
                eax += 1
                result = &result[1]
            
            if (*result != 0)
                result = &result[1]
}
