import { map } from 'rxjs/operators';
import { Injectable } from '@angular/core';
import { HttpClient } from '@angular/common/http';
import { Observable } from 'rxjs';

@Injectable({
  providedIn: 'root'
})
export class CharactersApiService {

  PUBLIC_KEY = "d8c9785575ee85ed1ad441428665e818";
  HASH = "31b08d9723974c606afa0a7c658bab04";
  TS = 1;
  URL_API_Characters = `https://gateway.marvel.com:443/v1/public/characters?ts=${this.TS}&apikey=${this.PUBLIC_KEY}&hash=${this.HASH}`;
  URL_API_Comics = `https://gateway.marvel.com:443/v1/public/comics?ts=${this.TS}&apikey=${this.PUBLIC_KEY}&hash=${this.HASH}`;
  URL_API_Series = `https://gateway.marvel.com:443/v1/public/series?ts=${this.TS}&apikey=${this.PUBLIC_KEY}&hash=${this.HASH}`;
  URL_API_Stories = `https://gateway.marvel.com:443/v1/public/stories?ts=${this.TS}&apikey=${this.PUBLIC_KEY}&hash=${this.HASH}`;
  

  constructor(private http: HttpClient) { }


  getAllCharacters (): Observable<any> {
    return this.http.get<any>(this.URL_API_Characters)
      .pipe(
        map((data: any) => data.data.results)
      )
  }

  getAllComics (): Observable<any> {
    return this.http.get<any>(this.URL_API_Comics)
      .pipe(
        map((data: any) => data.data.results)
      )
  }

  getAllSeries (): Observable<any> {
    return this.http.get<any>(this.URL_API_Series)
      .pipe(
        map((data: any) => data.data.results)
      )
  }

  getAllStories (): Observable<any> {
    return this.http.get<any>(this.URL_API_Stories)
      .pipe(
        map((data: any) => data.data.results)
      )
  }
}
