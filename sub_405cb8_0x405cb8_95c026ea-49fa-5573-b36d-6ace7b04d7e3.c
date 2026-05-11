// ============================================================
// 函数名称: sub_405cb8
// 虚拟地址: 0x405cb8
// WARP GUID: 95c026ea-49fa-5573-b36d-6ace7b04d7e3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreateFileA, GetFileType, ReadFile, GetFileSize, SetEndOfFile, GetLastError, SetFilePointer, CloseHandle, GetStdHandle
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_405e46
// ============================================================

enum WIN32_ERROR __convention("regparm")sub_405cb8(uint32_t* arg1)
{
    // 第一条实际指令: arg1[3] = 0
    arg1[3] = 0
    arg1[4] = 0
    int32_t eax = arg1[1]
    uint32_t dwDesiredAccess
    enum FILE_CREATION_DISPOSITION dwCreationDisposition
    
    if (eax == 0xd7b1)
        dwDesiredAccess = 0x80000000
        dwCreationDisposition = OPEN_EXISTING
        arg1[7] = sub_405c44
    else
        if (eax == 0xd7b2)
            dwDesiredAccess = 0x40000000
            dwCreationDisposition = CREATE_ALWAYS
        else
            if (eax != 0xd7b3)
                return eax - 0xd7b3
            
            dwDesiredAccess = 0xc0000000
            dwCreationDisposition = OPEN_EXISTING
        
        arg1[7] = sub_405c73
    
    arg1[9] = sub_405ca0
    arg1[8] = sub_405c70
    uint32_t var_8
    
    if (arg1[0x12].b == 0)
        arg1[9] = sub_405c70
        
        if (arg1[1] == 0xd7b2)
            var_8 = 0xfffffff5
        else
            var_8 = 0xfffffff6
        
        uint32_t eax_17 = GetStdHandle(var_8)
        
        if (eax_17 == 0xffffffff)
            goto label_405e38
        
        *arg1 = eax_17
    else
        var_8 = 0
        HANDLE eax_5 = CreateFileA(&arg1[0x12], dwDesiredAccess, FILE_SHARE_READ, nullptr, 
            dwCreationDisposition, FILE_ATTRIBUTE_NORMAL, var_8)
        
        if (eax_5 == 0xffffffff)
        label_405e38:
            arg1[1] = 0xd7b0
            return GetLastError()
        
        *arg1 = eax_5
        
        if (arg1[1] == 0xd7b3)
            arg1[1] -= 1
            var_8 = 0
            uint32_t eax_6 = GetFileSize(*arg1, var_8)
            
            if (eax_6 == 0xffffffff)
                goto label_405e38
            
            int32_t lDistanceToMove = eax_6 - 0x80
            
            if (eax_6 + 1 u< 0x81)
                lDistanceToMove = 0
            
            var_8 = 0
            
            if (SetFilePointer(*arg1, lDistanceToMove, nullptr, var_8) == 0xffffffff)
                goto label_405e38
            
            var_8 = 0
            BOOL eax_10 = ReadFile(*arg1, &arg1[0x53], 0x80, &var_8, nullptr)
            uint32_t edx_2 = var_8
            
            if (eax_10 != 1)
                goto label_405e38
            
            for (int32_t i = 0; i u< edx_2; i += 1)
                if (*(arg1 + i + 0x14c) == 0x1a)
                    var_8 = 2
                    
                    if (SetFilePointer(*arg1, i - edx_2, nullptr, var_8) == 0xffffffff)
                        goto label_405e38
                    
                    var_8 = *arg1
                    
                    if (SetEndOfFile(var_8) != 1)
                        goto label_405e38
                    
                    goto label_405dff
    
    label_405dff:
    
    if (arg1[1] != 0xd7b1)
        var_8 = *arg1
        enum FILE_TYPE eax_18 = GetFileType(var_8)
        
        if (eax_18 == FILE_TYPE_UNKNOWN)
            var_8 = *arg1
            CloseHandle(var_8)
            arg1[1] = 0xd7b0
            return ERROR_SEM_OWNER_DIED
        
        if (eax_18 == FILE_TYPE_CHAR)
            arg1[8] = sub_405c73
    
    return NO_ERROR
}
